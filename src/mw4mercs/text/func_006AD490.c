/*
 * FUN_006AD490 (151 B) — __cdecl (1 stack arg, RET 0). If [arg+0x99C] is
 * non-null, calls FUN_0050E230 and a virtual method at [vtable+4], then
 * calls FUN_0041EE20. Updates a counter table derived from [0x7DAB44]/
 * [0x7DAB40].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_0050E230(void);
extern void __cdecl FUN_0041EE20(void);

__declspec(naked) void FUN_006AD490(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [eax + 0x99c]
        test    esi, esi
        mov     dword ptr [esp + 4], 0x3f800000
        mov     dword ptr [esp + 8], 0
        je      loc_6ad4d4
        mov     ecx, dword ptr [esi + 0x1c0]
        push    ecx
        call    FUN_0050E230
        lea     ecx, [esi + 0x78]
        fstp    dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        add     esp, 4
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [eax + 0x38]
        mov     dword ptr [esp + 4], eax
loc_6ad4d4:
        mov     ecx, dword ptr [esp + 4]
        push    4
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_0041EE20
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        mov     edx, dword ptr [eax + ecx*4 + 0x848c]
        add     eax, 0x8484
        inc     edx
        mov     dword ptr [eax + ecx*4 + 8], edx
        inc     dword ptr [eax + 0xc00]
        pop     esi
        add     esp, 8
        ret
    }
}
