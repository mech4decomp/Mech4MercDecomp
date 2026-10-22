/*
 * FUN_005388D0 (379 B true extent) — __thiscall (this in ECX), RET 8
 * (2 params). Sets a byte at [ebx+ecx*8+0x353a], does vtable dispatch on
 * [ebx+0x4c] and [esi], copies a buffer, and calls several helpers.
 * Uses XOR-obfuscated globals [0x7dab44]/[0x7dab40] (key 0x85739531).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7db094;
extern int g_7dab40;
extern int g_7dab44;

extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004D2310(void);
extern void __cdecl FUN_0041E690(void);
extern void __cdecl FUN_004CEC10(void);
extern void __cdecl FUN_004D9910(void);
extern void __cdecl FUN_004D2330(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_0041E710(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void FUN_005388D0(void)
{
    __asm {
        sub     esp, 0x6c
        mov     eax, dword ptr [esp + 0x70]
        push    ebx
        mov     ebx, ecx
        mov     ecx, eax
        shl     ecx, 7
        push    ebp
        add     ecx, eax
        push    esi
        shl     ecx, 3
        sub     ecx, eax
        push    edi
        mov     byte ptr [ebx + ecx*8 + 0x353a], 1
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     edx, dword ptr [ecx]
        push    0
        push    3
        call    dword ptr [edx + 4]
        mov     esi, dword ptr [esp + 0x84]
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [esp + 0x84]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edx, dword ptr [ebx]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x70]
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x40]
        mov     word ptr [esp + 0x18], 4
        mov     word ptr [esp + 0x1a], 1
        call    FUN_004D1F80
        mov     ecx, dword ptr [esp + 0x54]
        push    ecx
        call    FUN_004084D0
        add     esp, 4
        lea     ecx, [esp + 0x38]
        mov     ebp, eax
        call    FUN_004D2310
        mov     ecx, dword ptr [esp + 0x54]
        mov     esi, dword ptr [esp + 0x4c]
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [ebp + 0x80], 0
        mov     al, byte ptr [esp + 0x80]
        push    0
        test    al, al
        push    ecx
        setne   al
        push    ebp
        lea     ecx, [esp + 0x24]
        mov     byte ptr [ebp + 0x80], al
        call    FUN_0041E690
        mov     ecx, dword ptr [g_7db094]
        call    FUN_004CEC10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x14], dl
        mov     ax, word ptr [eax + 2]
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     word ptr [esp + 0x22], ax
        call    FUN_004D9910
        add     esp, 0xc
        lea     ecx, [esp + 0x38]
        call    FUN_004D2330
        mov     eax, dword ptr [ebx + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edi, dword ptr [g_7dab40]
        test    ecx, ecx
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        je      L_89fb
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0x20]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0
        jmp     L_8a0a
L_89fb:
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0x20]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    1
L_8a0a:
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x30]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x2c], eax
        jbe     L_8a26
        mov     dword ptr [esp + 0x30], eax
L_8a26:
        push    ebp
        call    FUN_004084E0
        add     esp, 4
        lea     ecx, [esp + 0x18]
        call    FUN_0041E710
        lea     ecx, [esp + 0x38]
        call    FUN_004D21C0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x6c
        ret     8
    }
}
