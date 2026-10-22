/*
 * FUN_5e00fbf0 (152 B) — DirectDraw surface format-set wrapper.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e035730;
extern int g_5e035734;
extern int g_5e035738;
extern int g_5e03573c;
extern void __cdecl FUN_5e001b60(void);

__declspec(naked) void __stdcall FUN_5e00fbf0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        test    byte ptr [edx + 0x4], 0x2
        jz      loc_fc71
        push    edi
        mov     ecx, 0x4
        mov     edi, 0x5e035730
        lea     esi, [edx + 0x10]
        xor     eax, eax
        repe    cmpsd
        pop     edi
        jnz     loc_fc71
        mov     eax, dword ptr [esp + 0x10]
        cmp     dword ptr [eax], 0x20c
        jnz     loc_fc68
        mov     edx, dword ptr [g_5e035730]
        lea     ecx, [eax + 0x4]
        mov     dword ptr [eax + 0x14], 0xfc
        mov     dword ptr [eax + 0x110], 0xfc
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [g_5e035734]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [g_5e035738]
        mov     dword ptr [ecx + 0x8], edx
        mov     edx, dword ptr [g_5e03573c]
        mov     dword ptr [ecx + 0xc], edx
        lea     ecx, [eax + 0x14]
        add     eax, 0x110
        push    eax
        push    ecx
        call    FUN_5e001b60
        xor     eax, eax
        pop     esi
        ret     0xc
loc_fc68:
        mov     eax, 0x80070057
        pop     esi
        ret     0xc
loc_fc71:
        mov     eax, dword ptr [esp + 0x8]
        mov     esi, dword ptr [esp + 0x10]
        push    esi
        push    edx
        mov     eax, dword ptr [eax + 0x18]
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x20]
        pop     esi
        ret     0xc
    }
}
