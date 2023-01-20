// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let version = 0.1

let package = Package(
    name: "abseil",
    products: [
      .library(name: "abseil", targets: ["abseil"])
    ],
    targets: [
        .binaryTarget(
            name: "abseil",
            url: "https://github.com/ncooke3/abseil-cpp-SwiftPM/releases/releases/download/0.1/abseil.zip",
            checksum: "76b70187a4ac02808ca64cc20e3762c691a3258069e25d0548424fdc411c85ab"
        ),
//        .testTarget(
//          name: "build-test",
//          dependencies: [
//            "abseil",
//          ],
//          path: "SwiftPMTests/build-test"
//        )
    ]//,
//    cxxLanguageStandard: CXXLanguageStandard.gnucxx14
)
