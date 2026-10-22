/*
 * FUN_0041fa70 (277 B) — __thiscall tree/section save-load. If *param_1
 * is non-null and does not end with ']', writes it via FUN_00412780 and
 * returns. Otherwise builds a "{\r\n" ... "}" section via FUN_0041ee70 /
 * FUN_0040e450 and vtable calls (call [edx+0x24] / [edx+0xc]), writes it
 * out, sets dirty flags, and calls FUN_0041ef60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_76d158[];
extern char g_str_76d13c[];
extern void FUN_00412780(void);
extern void FUN_0041ee70(void);
extern void FUN_0040e450(void);
extern void FUN_0041ef60(void);

__declspec(naked) void FUN_0041fa70(void)
{
    __asm {
        sub     esp, 0x28
        push    ebp
        mov     ebp, dword ptr [esp+0x30]
        mov     edx, dword ptr [ebp]
        test    edx, edx
        push    esi
        push    edi
        mov     esi, ecx
        jz      L_41fab3
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        mov     al, byte ptr [ecx+edx-0x2]
        dec     ecx
        cmp     al, 0x5d
        jz      L_41fab3
        push    edx
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        pop     edi
        pop     esi
        mov     byte ptr [ecx+0x4], 0x1
        pop     ebp
        add     esp, 0x28
        ret     0x4
L_41fab3:
        push    0x5
        lea     ecx, [esp+0x10]
        call    FUN_0041ee70
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_76d158
        repne   scasb
        not     ecx
        dec     ecx
        jz      L_41faed
        mov     edx, dword ptr [esp+0xc]
        or      ecx, 0xffffffff
        mov     edi, offset g_str_76d158
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    offset g_str_76d158
        lea     ecx, [esp+0x14]
        call    dword ptr [edx+0x24]
L_41faed:
        lea     eax, [esp+0xc]
        push    eax
        mov     ecx, ebp
        call    FUN_0040e450
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_76d13c
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp+0x38], 0x0
        jnz     L_41fb15
        lea     eax, [esp+0xc]
        jmp     L_41fb35
L_41fb15:
        mov     edx, dword ptr [esp+0xc]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_76d13c
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    offset g_str_76d13c
        lea     ecx, [esp+0x14]
        call    dword ptr [edx+0x24]
L_41fb35:
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [esp+0x3c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [esp+0xc]
        push    0x0
        lea     ecx, [esp+0x10]
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esp+0x20]
        push    eax
        lea     ecx, [esi+0x18]
        mov     dword ptr [esp+0x18], 0xffffffec
        call    FUN_00412780
        mov     ecx, dword ptr [esi+0x10]
        mov     edx, dword ptr [ecx+0x10]
        lea     ecx, [esp+0xc]
        mov     byte ptr [edx+0x4], 0x1
        mov     byte ptr [ebp+0x4], 0x0
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x28
        ret     0x4
    }
}
