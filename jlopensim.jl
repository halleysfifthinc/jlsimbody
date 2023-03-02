module jlopensim

export <, ==, assign, clone, dump, getAuthors, getConcreteClassName, getDescription, getDocumentFileName
export getDocumentFileVersion, getInlined, getName, getNumProperties, getPropertyByIndex, getPropertyByName, getPropertySet, getReferences
export hasProperty, isA, isEqualTo, isObjectUpToDateWithProperties, print, readObjectFromXMLNodeOrFile, setAllPropertiesUseDefault
export setAuthors, setDescription, setInlined, setName, setReferences, toString, updPropertyByIndex, updPropertyByName
export updateFromXMLNode, updateXMLNode

using CxxWrap
@wrapmodule("jljlopensim")

function __init__()
    @initcxx
end

end #module
