__declspec(naked) void __stdcall FUN_004f14c0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x24]
loop_start:
        test    esi, esi
        jz      done
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 4]
        jz      done
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 0x10]
        jmp     loop_start
done:
        pop     edi
        pop     esi
        ret
    }
}
