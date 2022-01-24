{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "enumerate_displays.cc",
        "sleep_displays.cc",
        "wake_displays.cc",
        "last_input_info.cc",
      ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
