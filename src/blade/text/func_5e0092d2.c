/* auto-transcribed gap function 0x5E0092D2 (206 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e0092d2(void)
{
    __asm {
            mov edi, edi
            __emit 0x03 /* add esp, dword ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x66 /* add esp, dword ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x00 /* add esp, dword ptr [esi]: MSVC6 cannot encode natively */
            pop esi
            mov esi, 0x145e0063
            add byte ptr gs:[esi - 0x12], bl
            pop edx
            add byte ptr [esi + 0x36], bl
            pop edi
            add byte ptr [esi - 0x1d], bl
            pop esp
            add byte ptr [esi + 0x49], bl
            push 0
            pop esi
            __emit 0xaa /* stosb byte ptr es:[edi], al: MSVC6 cannot encode natively */
            __emit 0x69 /* imul eax, dword ptr [eax], 0x69fb5e: MSVC6 cannot encode natively */
            __emit 0x00 /* imul eax, dword ptr [eax], 0x69fb5e: MSVC6 cannot encode natively */
            __emit 0x5e /* imul eax, dword ptr [eax], 0x69fb5e: MSVC6 cannot encode natively */
            __emit 0xfb /* imul eax, dword ptr [eax], 0x69fb5e: MSVC6 cannot encode natively */
            __emit 0x69 /* imul eax, dword ptr [eax], 0x69fb5e: MSVC6 cannot encode natively */
            __emit 0x00 /* imul eax, dword ptr [eax], 0x69fb5e: MSVC6 cannot encode natively */
            pop esi
            push ebp
            __emit 0x67 /* add byte ptr [bp + 0x40], bl: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [bp + 0x40], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [bp + 0x40], bl: MSVC6 cannot encode natively */
            __emit 0x40 /* add byte ptr [bp + 0x40], bl: MSVC6 cannot encode natively */
            __emit 0x68 /* push 0x67d15e00: MSVC6 cannot encode natively */
            __emit 0x00 /* push 0x67d15e00: MSVC6 cannot encode natively */
            __emit 0x5e /* push 0x67d15e00: MSVC6 cannot encode natively */
            __emit 0xd1 /* push 0x67d15e00: MSVC6 cannot encode natively */
            __emit 0x67 /* push 0x67d15e00: MSVC6 cannot encode natively */
            add byte ptr [esi - 0x78], bl
            jae lbl_5e009307
        lbl_5e009307:
            pop esi
            __emit 0x83 /* xor dword ptr [ecx], 0x5e: MSVC6 cannot encode natively */
            __emit 0x71 /* xor dword ptr [ecx], 0x5e: MSVC6 cannot encode natively */
            __emit 0x00 /* xor dword ptr [ecx], 0x5e: MSVC6 cannot encode natively */
            __emit 0x5e /* xor dword ptr [ecx], 0x5e: MSVC6 cannot encode natively */
            mov esi, 0x905e0072
            push 0
            pop esi
            inc edx
            __emit 0x6e /* outsb dx, byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi + 0x55], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi + 0x55], bl: MSVC6 cannot encode natively */
            __emit 0x55 /* add byte ptr [esi + 0x55], bl: MSVC6 cannot encode natively */
            __emit 0x6c /* insb byte ptr es:[edi], dx: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [esi + 0x29], bl: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [esi + 0x29], bl: MSVC6 cannot encode natively */
            __emit 0x29 /* add byte ptr [esi + 0x29], bl: MSVC6 cannot encode natively */
            jbe lbl_5e00931f
        lbl_5e00931f:
            pop esi
            xlatb
            jne lbl_5e009323
        lbl_5e009323:
            pop esi
            __emit 0x02 /* add dh, byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x76 /* add dh, byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x00 /* add dh, byte ptr [esi]: MSVC6 cannot encode natively */
            pop esi
            xlatb
            je lbl_5e00932b
        lbl_5e00932b:
            pop esi
            dec esi
            jne lbl_5e00932f
        lbl_5e00932f:
            pop esi
            sbb dh, byte ptr [ebp]
            pop esi
            pop ss
            __emit 0x82 /* add byte ptr [eax], 0x5e: MSVC6 cannot encode natively */
            __emit 0x00 /* add byte ptr [eax], 0x5e: MSVC6 cannot encode natively */
            __emit 0x5e /* add byte ptr [eax], 0x5e: MSVC6 cannot encode natively */
            __emit 0xd8 /* fdivr dword ptr [edi]: MSVC6 cannot encode natively */
            __emit 0x7f /* fdivr dword ptr [edi]: MSVC6 cannot encode natively */
            __emit 0x00 /* fdivr dword ptr [edi]: MSVC6 cannot encode natively */
            pop esi
            sub al, byte ptr [ecx + 0x77085e00]
            add byte ptr [esi + 0x50], bl
            jnp lbl_5e009347
        lbl_5e009347:
            pop esi
            std
            js lbl_5e00934b
        lbl_5e00934b:
            pop esi
            xchg byte ptr gs:[eax], al
            pop esi
            into
            test dword ptr [eax], eax
            pop esi
            sbb eax, dword ptr [esi - 0x7c96a200]
            add byte ptr [esi + 0x52], bl
            test byte ptr [eax], al
            pop esi
            in eax, 0x83
            add byte ptr [esi + 0xb], bl
            nop
            add byte ptr [esi + 0x5f], bl
            lea eax, [eax]
            pop esi
            xchg ebx, eax
            __emit 0x8e /* mov es, word ptr [eax]: MSVC6 cannot encode natively */
            __emit 0x00 /* mov es, word ptr [eax]: MSVC6 cannot encode natively */
            pop esi
            leave
            xchg byte ptr [eax], al
            pop esi
            __emit 0xf0 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x89 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0x87 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x88 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0x9d /* EMIT : MSVC6 cannot encode natively */
            __emit 0x92 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5f /* EMIT : MSVC6 cannot encode natively */
            __emit 0x92 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0x80 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x92 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0x6e /* EMIT : MSVC6 cannot encode natively */
            __emit 0x91 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0xde /* EMIT : MSVC6 cannot encode natively */
            __emit 0x91 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0xad /* EMIT : MSVC6 cannot encode natively */
            __emit 0x91 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x00 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x5e /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
            __emit 0x90 /* EMIT : MSVC6 cannot encode natively */
    }
}
