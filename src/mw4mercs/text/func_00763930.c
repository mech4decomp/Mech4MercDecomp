/*
 * FUN_00763930 (58 B) — Calls three helpers with (param_1, param_2),
 * continuing only while each returns 0xA.
 *
 * __cdecl (RET, 2 params). CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00763970(void);
extern int __cdecl FUN_007639E0(void);
extern int __cdecl FUN_00763A50(void);

__declspec(naked) int __cdecl FUN_00763930(void *param_1, void *param_2)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        push    esi
        push    edi
        call    FUN_00763970
        add     esp, 0x8
        cmp     eax, 0xA
        jne     end
        push    esi
        push    edi
        call    FUN_007639E0
        add     esp, 0x8
        cmp     eax, 0xA
        jne     end
        push    esi
        push    edi
        call    FUN_00763A50
        add     esp, 0x8
        cmp     eax, 0xA
        jne     end
end:
        pop     edi
        pop     esi
        ret
    }
}
