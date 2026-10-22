/*
 * FUN_100456dc (76 B) — __cdecl.
 * If (param_1[3] & 0x83) set: calls FUN_100440d7/FUN_10045e13/FUN_10045d33,
 * frees param_1[7] via FUN_1003c2dc on success. Clears param_1[3], returns
 * result (or -1).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100440d7(void);
extern void __cdecl FUN_10045e13(void);
extern void __cdecl FUN_10045d33(void);
extern void __cdecl FUN_1003c2dc(void);

__declspec(naked) void __cdecl FUN_100456dc(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        or      edi, 0xffffffff
        test    byte ptr [esi + 0xc], 0x83
        jz      done
        push    esi
        call    FUN_100440d7
        push    esi
        mov     edi, eax
        call    FUN_10045e13
        push    dword ptr [esi + 0x10]
        call    FUN_10045d33
        add     esp, 0xc
        test    eax, eax
        jge     check
        or      edi, 0xffffffff
        jmp     done
    check:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_1003c2dc
        and     dword ptr [esi + 0x1c], 0
        pop     ecx
    done:
        and     dword ptr [esi + 0xc], 0
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
