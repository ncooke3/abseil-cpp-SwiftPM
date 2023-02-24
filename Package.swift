// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let version = "0.4.0"

let package = Package(
    name: "abseil",
    products: [
      .library(name: "abseil", targets: ["abseil"])
    ],
    targets: [
        .binaryTarget(
            name: "abseil",
            url: "https://github.com/ncooke3/abseil-cpp-SwiftPM/releases/download/\(version)/abseil.zip",
            checksum: "e5c00848c14efe5316b0d7f51f78ec56f8ee7bd8f79b84e3ff399af1a6c3063e"
        ),
        .testTarget(
          name: "build-test",
          dependencies: [
            "abseil",
          ],
          path: "SwiftPMTests/build-test"
        )
    ],
    cxxLanguageStandard: CXXLanguageStandard.gnucxx14
)
