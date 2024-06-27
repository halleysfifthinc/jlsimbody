using Pkg

simbody = values(filter(((k,p),) -> p.name == "Simbody_jll", Pkg.dependencies())) |> first

if isdir(simbody.source)
    using Simbody_jll
    
    print(dirname(dirname(Simbody_jll.libSimTKsimbody_path)))
else
    exit(1)
end
