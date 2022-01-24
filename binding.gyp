{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        # "pi_est.cc",
        "enumerate_displays.cc",
        "sleep_displays.cc",
        "last_input_info.cc",
        # "sync.cc",
        # "async.cc"
      ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
