/*
 * FUN_0x00556d80 (117 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00556d80(void)
{
    

extern void __cdecl FUN_0061acbd(void);
extern void __cdecl FUN_0061ace6(void);
__asm {
push    esi
        mov     esi, ecx
        mov     al, [esi + 0x589]
        test    al, al
        je      L_else
        mov     eax, [esp + 8]
        mov     ecx, [eax + 0x10]
        test    ecx, ecx
        jg      L_check
        dec     dword ptr [esi + 0x46C]
L_check:
        mov     eax, [esi + 0x46C]
        test    eax, eax
        jge     L_done
        mov     dword ptr [esi + 0x46C], 0
        pop     esi
        ret     4
L_else:
        push    8
        call FUN_0061acbd
        mov     ecx, eax
        call FUN_0061ace6
        test    al, al
        je      L_done
        mov     ecx, [esp + 8]
        mov     eax, [ecx + 0x10]
        test    eax, eax
        mov     eax, [esi + 0x46C]
        jle     L_dec
        inc     eax
        jmp     L_store
L_dec:
        dec     eax
L_store:
        test    eax, eax
        mov     [esi + 0x46C], eax
        jge     L_done
        mov     dword ptr [esi + 0x46C], 0
L_done:
        pop     esi
        ret     4
    }


}
