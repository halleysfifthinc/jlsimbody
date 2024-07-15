using TOML

override_file = expanduser("~/.julia/artifacts/Overrides.toml")
jlsimbody_jll_uuid = "041f4ef7-f559-5b27-b355-a04ac8b0617e"
statusfile = joinpath(ARGS[1], "jlsimbody_override")

changed::Bool = false
if (ARGS[2] == "override")
    if isfile(override_file)
        overrides = TOML.parsefile(override_file)
    else
        global changed = true
        overrides = Dict()
    end

    jlsimbody = get!(overrides, jlsimbody_jll_uuid) do
        global changed = true
        Dict("jlsimbody" => ARGS[1])
    end

    jlsimbody_override = get!(jlsimbody, "jlsimbody") do
        global changed = true
        ARGS[1]
    end

    if jlsimbody_override != ARGS[1]
        global changed = true
        jlsimbody["jlsimbody"] = ARGS[1]
    end

    if changed
        open(override_file, "w") do io
            TOML.print(io, overrides)
        end
        touch(statusfile)
    end
elseif (ARGS[2] == "unoverride")
    if isfile(override_file)
        overrides = TOML.parsefile(override_file)
        delete!(overrides, jlsimbody_jll_uuid)
        open(override_file, "w") do io
            TOML.print(io, overrides)
        end
    end
    isfile(statusfile) && rm(statusfile)
end

