/*
 * FUN_00685730 (305 B) — __thiscall (ECX = this), RET 0x4 (one stack param).
 * Builds a 3-float vector via FUN_0040c9c0 / FUN_0041c540 and writes it out.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0040c9c0(void *this, int a, int b, int c);
extern void *__fastcall FUN_00685870(void *this);
extern void __fastcall FUN_0040c410(void *this);
extern char __cdecl FUN_0041c540(void *a, void *b, int c);
extern void __fastcall FUN_0040c5d0(void *this);
extern int DAT_007b220c;

__declspec(naked) void __fastcall FUN_00685730(void)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    esi
        push    edi
        push    0xbf800000
        push    0xbf800000
        mov     esi, ecx
        push    0xbf800000
        lea     ecx, [esp + 0x24]
        call    FUN_0040c9c0
        mov     al, byte ptr [esi + 0x3c]
        test    al, al
        jnz     L_778
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x30]
        jmp     L_836
    L_778:
        mov     ecx, dword ptr [esi + 0x64]
        test    ecx, ecx
        jz      L_793
        lea     edx, [esp + 0x54]
        push    edx
        call    FUN_00685870
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c410
    L_793:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x48]
        call    FUN_0040c9c0
        mov     eax, dword ptr [DAT_007b220c]
        push    eax
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_7cd
        lea     eax, [esp + 0x18]
        jmp     L_836
    L_7cd:
        mov     edi, dword ptr [esi + 0x54]
        mov     ebx, dword ptr [esi + 0x60]
        cmp     ebx, edi
        jz      L_81a
        mov     edx, dword ptr [esi + 0x50]
        mov     ecx, edi
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 1
        jbe     L_81a
        lea     eax, [ebx + 0x18]
        cmp     eax, edi
        jnz     L_836
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        mov     dword ptr [esp + 0x2c], 0xbf800000
        push    edx
        jmp     L_837
    L_81a:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x54]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x48]
    L_836:
        push    eax
    L_837:
        lea     ecx, [esp + 0x10]
        call    FUN_0040c5d0
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        pop     ebx
        add     esp, 0x54
        ret     4
    }
}
