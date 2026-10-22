/*
 * In-.text data block 0x567237 (452 B) — single __cdecl function (no args).
 * Advances a global string cursor (0x805918/0x805908), dispatches on a
 * token id (compared against 0x80d9bc/0x80d9b0/0x80d9b8/0x80d9b4) and
 * formats a message into a stack buffer via the fn ptr at [0x76b420],
 * then (if the global 0x7f2ba8 is set) emits several more formatted
 * records through FUN_0061FC80 / FUN_0064C3D0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805918;
extern int g_805908;
extern int g_80D9BC;
extern int g_80D9B0;
extern int g_80D9B8;
extern int g_80D9B4;
extern int g_80592C;
extern int g_7F2BA8;
extern int g_80D984;
extern int g_8058CC;
extern int g_805904;
extern void *g_76B420;
extern void __cdecl FUN_0064DB40(void);
extern void __cdecl FUN_0064C950(void);
extern void __cdecl FUN_0061FC80(void);
extern void __cdecl FUN_0064C3D0(void);

__declspec(naked) void FUN_00567380(void)
{
    __asm {
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax + 1]
        sub     esp, 0x214
        inc     eax
        push    esi
        inc     eax
        push    edi
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064DB40
        push    eax
        call    FUN_0064C950
        mov     ecx, dword ptr [g_80D9BC]
        mov     esi, dword ptr [g_76B420]
        add     esp, 4
        cmp     eax, ecx
        lea     edi, [esp + 8]
        jne     L5673DD
        mov     edx, dword ptr [g_80592C]
        mov     eax, dword ptr [edx]
        push    eax
        lea     ecx, [esp + 0xc]
        push    0x76b9a8
        push    ecx
        call    esi
        add     esp, 0xc
        jmp     L56746B
L5673DD:
        cmp     eax, dword ptr [g_80D9B0]
        jne     L56740C
        mov     edx, dword ptr [g_80592C]
        cmp     dword ptr [edx], 0
        mov     eax, 0x76d170
        jne     L5673FA
        mov     eax, 0x76d834
L5673FA:
        push    eax
        lea     eax, [esp + 0xc]
        push    0x76c690
        push    eax
        call    esi
        add     esp, 0xc
        jmp     L56746B
L56740C:
        mov     ecx, dword ptr [g_80D9B8]
        cmp     eax, ecx
        jne     L567432
        mov     edx, dword ptr [g_80592C]
        xor     ecx, ecx
        mov     cl, byte ptr [edx]
        lea     eax, [esp + 8]
        push    ecx
        push    0x77f804
        push    eax
        call    esi
        add     esp, 0xc
        jmp     L56746B
L567432:
        cmp     eax, dword ptr [g_80D9B4]
        jne     L567459
        mov     ecx, dword ptr [g_80592C]
        fld     dword ptr [ecx]
        sub     esp, 8
        fstp    qword ptr [esp]
        lea     edx, [esp + 0x10]
        push    0x77f7fc
        push    edx
        call    esi
        add     esp, 0x10
        jmp     L56746B
L567459:
        cmp     dword ptr [eax + 4], 3
        jne     L56746B
        cmp     dword ptr [eax + 0x14], ecx
        jne     L56746B
        mov     eax, dword ptr [g_80592C]
        mov     edi, dword ptr [eax]
L56746B:
        mov     ecx, dword ptr [g_80592C]
        mov     eax, dword ptr [g_7F2BA8]
        sub     ecx, 4
        test    eax, eax
        mov     dword ptr [g_80592C], ecx
        je      L567525
        push    edi
        lea     ecx, [esp + 0x20]
        push    0x77f7ec
        push    ecx
        call    esi
        mov     ecx, dword ptr [g_7F2BA8]
        add     esp, 0xc
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_0061FC80
        mov     eax, dword ptr [g_80D984]
        add     eax, 4
        push    eax
        lea     ecx, [esp + 0x20]
        push    0x77f7dc
        push    ecx
        call    esi
        mov     ecx, dword ptr [g_7F2BA8]
        add     esp, 0xc
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_0061FC80
        mov     eax, dword ptr [g_8058CC]
        mov     ecx, dword ptr [g_80D984]
        push    eax
        call    FUN_0064C3D0
        push    eax
        lea     ecx, [esp + 0x20]
        push    0x77f7d0
        push    ecx
        call    esi
        mov     ecx, dword ptr [g_7F2BA8]
        add     esp, 0xc
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_0061FC80
        mov     eax, dword ptr [g_805904]
        push    eax
        lea     ecx, [esp + 0x20]
        push    0x77f7c4
        push    ecx
        call    esi
        mov     ecx, dword ptr [g_7F2BA8]
        add     esp, 0xc
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_0061FC80
L567525:
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     edi
        mov     dword ptr [g_805918], eax
        mov     dword ptr [g_805908], ecx
        xor     eax, eax
        pop     esi
        add     esp, 0x214
        ret
    }
}
