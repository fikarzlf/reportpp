# TODO integrate this workflow into cmake configuration

OUTPUT_DIR=src/reportpp/parser

.PHONY: cxx-parser
cxx-parser: reportpp.xsd types.map src/reportpp/parser
	xsdcxx cxx-parser \
		--output-dir ${OUTPUT_DIR} \
		--generate-print-impl \
		--generate-inline \
		--root-element-first \
		--generate-test-driver \
		--type-map types.map \
		--namespace-map https://github.com/mmickey/reportpp=reportpp \
		reportpp.xsd

src/reportpp/parser:
	mkdir -p ${OUTPUT_DIR}

.PHONY: clean
clean:
	rm -r ${OUTPUT_DIR}
