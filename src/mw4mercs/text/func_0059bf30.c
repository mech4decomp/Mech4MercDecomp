/*
 * FUN_0059bf30 (88 B) — __thiscall method, RET 8, 2 stack params.
 *
 * Calls FUN_0059BD80(this, arg2) to find a node. If found:
 *   - Sets node->field_1c = arg1
 *   - If arg1 is non-null, does pointer-chasing through globals
 *     to set node->field_4c, then calls FUN_004179B0(this+0x18, node)
 *   - If arg1 is null, calls FUN_0059BEC0(this, arg2)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0059bd80(void);
extern void __stdcall FUN_0059bec0(void);
extern void __stdcall FUN_004179b0(void);

__declspec(naked) void __stdcall FUN_0059bf30(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        push    edi
        mov     edi, [esp + 0x10]           ; edi = arg2
        mov     esi, ecx                    ; esi = this
        push    edi
        call    FUN_0059bd80                ; FUN_0059BD80(this, arg2)
        test    eax, eax
        je      L_end
        mov     ecx, [esp + 0x0C]           ; ecx = arg1
        test    ecx, ecx
        mov     [eax + 0x1C], ecx           ; node->field_1c = arg1
        je      L_other_path
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]                  ; *global
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x44]           ; *(result + 0x44)
        xor     ecx, 0x85739531             ; ^ constant
        mov     edx, [ecx + 0x1C]           ; *(that + 0x1c)
        mov     ecx, [edx + 0x28]           ; *(that + 0x28)
        mov     [eax + 0x4C], ecx           ; node->field_4c = that
        push    eax
        lea     ecx, [esi + 0x18]           ; ecx = this + 0x18
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     8

    L_other_path:
        push    edi
        mov     ecx, esi
        call    FUN_0059bec0

    L_end:
        pop     edi
        pop     esi
        ret     8
    }


}
