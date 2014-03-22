
.PHONY: cxx-parser
cxx-parser: reportpp.xsd types.map
	xsdcxx cxx-parser \
		--show-sloc \
		--generate-validation \
		--output-dir include \
		--generate-print-impl \
		--root-element-first \
		--generate-test-driver \
		--type-map types.map \
		--force-overwrite \
		--namespace-map https://github.com/mmickey/reportpp=reportpp \
		reportpp.xsd
