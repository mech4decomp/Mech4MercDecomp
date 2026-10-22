/*
 * FUN_0074956F (130 B) — __stdcall RET 0x8 (2 params). Zeroes a 7-dword
 * output struct, then if two globals (0x8b79ec, 0x858990) are clear,
 * copies/transforms fields from the source object (scaling two qwords by
 * g_007aa4b8) and calls FUN_0075B6E0; else zeroes two fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008b79ec;
extern char g_00858990;
extern double g_007aa4b8;

extern void __cdecl FUN_0075B6E0(void);

__declspec(naked) void FUN_0074956F(void)
{
    __asm {
        nop
        sub     esp, 8
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        xor     eax, eax
        mov     ecx, 7
        mov     edi, esi
        rep stosd
        cmp     byte ptr [g_008b79ec], al
        je      L7495e3
        cmp     byte ptr [g_00858990], al
        jne     L7495e3
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0x10]
        fild    qword ptr [edi + 0x28]
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [edi + 0x14]
        fmul    qword ptr [g_007aa4b8]
        mov     dword ptr [esi + 4], eax
        lea     eax, [esp + 8]
        fstp    dword ptr [esi + 0xc]
        mov     dword ptr [esi + 8], ecx
        mov     ecx, dword ptr [edi]
        push    eax
        push    ecx
        mov     dword ptr [esi], edx
        call    FUN_0075B6E0
        fild    qword ptr [esp + 8]
        mov     edx, dword ptr [edi + 0x20]
        mov     eax, dword ptr [edi + 0x24]
        fmul    qword ptr [g_007aa4b8]
        pop     edi
        fstp    dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x14], edx
        mov     dword ptr [esi + 0x18], eax
        pop     esi
        add     esp, 8
        ret     8
    L7495e3:
        pop     edi
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        add     esp, 8
        ret     8
    }
}
