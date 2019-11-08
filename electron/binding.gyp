{
  "targets": [
    {
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ],
      "target_name": "native",
      "sources": [ "src/native.cc" ]
    }
  ]
}