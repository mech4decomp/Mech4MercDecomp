/*
 * FUN_0066c4a0 (64 B) - AnimationStateEngine joint-name tag parser.
 * If the string starts with '#', the next char + 0x80 indexes the joint-cage
 * name table (0x7b5a9c) and FUN_00412780 is called with it; returns the
 * index. Otherwise FUN_00412780(param_1) and returns 0xffffffff.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_7b5a9c[];              /* joint-cage name table @ 0x7b5a9c */
extern void __cdecl FUN_00412780(void);   /* thiscall via ECX */

__declspec(naked) void FUN_0066c4a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     byte ptr [eax], 0x23
        jnz     L_c4d2
        mov     al, byte ptr [eax + 1]
        add     al, 0x80
        push    esi
        mov     byte ptr [esp + 8], al
        mov     esi, dword ptr [esp + 8]
        and     esi, 0xff
        mov     ecx, dword ptr [esi*4 + g_7b5a9c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_00412780
        mov     eax, esi
        pop     esi
        ret
L_c4d2:
        mov     ecx, dword ptr [esp + 8]
        push    eax
        call    FUN_00412780
        or      eax, 0xffffffff
        ret
    }
}
