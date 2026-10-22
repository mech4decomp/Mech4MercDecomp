/*
 * FUN_1002d920 (94 B) — __stdcall, RET 0x18.
 * Loop calling FUN_1002dcf0 per element; accumulates into *param_3.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1002dcf0(void);

__declspec(naked) void __stdcall FUN_1002d920(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        push    esi
        xor     ebp, ebp
        xor     eax, eax
        xor     esi, esi
        test    ecx, ecx
        push    edi
        jbe     done
        mov     ebx, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x14]
        /* __emit: 7-byte alignment NOP (lea ebx,[ebx+0] = 8D 9B 00 00 00 00);
           MSVC6 would emit a shorter form, not this exact 7-byte pad */
        __emit 0x8D
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    again:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax + esi*4]
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        push    ebx
        push    edi
        call    FUN_1002dcf0
        test    eax, eax
        jl      done2
        mov     ecx, dword ptr [esp + 0x18]
        add     ebp, ecx
        sub     ebx, ecx
        lea     edi, [edi + ecx*2]
        mov     ecx, dword ptr [esp + 0x28]
        inc     esi
        cmp     esi, ecx
        jc      again
    done:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx], ebp
    done2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}
