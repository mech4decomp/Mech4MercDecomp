/* auto-transcribed gap function 0x1001C65E (98 B); review against reference; stepping stone */
__declspec(naked) void FUN_1001c65e(void)
{
    __asm {
            mov edi, edi
            inc esi
            mov byte ptr [ecx], 0x10
            test ch, 1
            adc byte ptr [ebx - 0x42effe3b], dl
            lds eax, dword ptr [ecx]
            adc byte ptr [esi], cl
            mov byte ptr [ecx], 0x10
            pop edx
            mov byte ptr [ecx], 0x10
            __emit 0x00 /* add byte ptr [0x5050505], al: MSVC6 cannot encode natively */
            __emit 0x05 /* add byte ptr [0x5050505], al: MSVC6 cannot encode natively */
            __emit 0x05 /* add byte ptr [0x5050505], al: MSVC6 cannot encode natively */
            __emit 0x05 /* add byte ptr [0x5050505], al: MSVC6 cannot encode natively */
            __emit 0x05 /* add byte ptr [0x5050505], al: MSVC6 cannot encode natively */
            __emit 0x05 /* add byte ptr [0x5050505], al: MSVC6 cannot encode natively */
            __emit 0x05 /* add eax, 0x1050505: MSVC6 cannot encode natively */
            __emit 0x05 /* add eax, 0x1050505: MSVC6 cannot encode natively */
            __emit 0x05 /* add eax, 0x1050505: MSVC6 cannot encode natively */
            __emit 0x05 /* add eax, 0x1050505: MSVC6 cannot encode natively */
            __emit 0x01 /* add eax, 0x1050505: MSVC6 cannot encode natively */
            add eax, 0x5050505
            add eax, 0x2050505
            add eax, 0x5050505
            add eax, 0x5030505
            add eax, 0x5050505
            add eax, 0x5050505
            add eax, 0x5050505
            add eax, 0x5050505
            add eax, 0x5050505
            add eax, 0x5050505
            add eax, 0x5050505
            add eax, 0x90040505
            nop
    }
}
