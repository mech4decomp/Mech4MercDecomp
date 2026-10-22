/*
 * FUN_10019b30 (456 B) - __fastcall cleanup/destructor with SEH frame.
 * Frees 9 buffer groups (via free pointer at 0x100210ec) if their
 * size/count fields are nonzero, then calls FUN_100067d0 on this+0x20
 * and installs vtable 0x10021688.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_100210ec;
extern unsigned long g_10021688;
extern void __cdecl FUN_100067d0(void);

__declspec(naked) void __cdecl FUN_10019b30(void)
{
    __asm {
        push    -1
        push    0x100200c8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        mov     ebx, dword ptr [g_100210ec]
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     eax, dword ptr [esi + 0x508]
        mov     dword ptr [esp + 0xc], esi
        cmp     eax, edi
        jbe     short L1
        mov     eax, dword ptr [esi + 0x4fc]
        cmp     eax, edi
        jz      short L1
        push    eax
        call    ebx
        add     esp, 4
L1:
        mov     dword ptr [esi + 0x4fc], edi
        mov     dword ptr [esi + 0x50c], edi
        mov     dword ptr [esi + 0x508], edi
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, edi
        jbe     short L2
        mov     eax, dword ptr [esi + 0x464]
        cmp     eax, edi
        jz      short L2
        push    eax
        call    ebx
        add     esp, 4
L2:
        mov     dword ptr [esi + 0x464], edi
        mov     dword ptr [esi + 0x474], edi
        mov     dword ptr [esi + 0x470], edi
        mov     eax, dword ptr [esi + 0x3d8]
        cmp     eax, edi
        jbe     short L3
        mov     eax, dword ptr [esi + 0x3cc]
        cmp     eax, edi
        jz      short L3
        push    eax
        call    ebx
        add     esp, 4
L3:
        mov     dword ptr [esi + 0x3cc], edi
        mov     dword ptr [esi + 0x3dc], edi
        mov     dword ptr [esi + 0x3d8], edi
        mov     eax, dword ptr [esi + 0x340]
        cmp     eax, edi
        jbe     short L4
        mov     eax, dword ptr [esi + 0x334]
        cmp     eax, edi
        jz      short L4
        push    eax
        call    ebx
        add     esp, 4
L4:
        mov     dword ptr [esi + 0x334], edi
        mov     dword ptr [esi + 0x344], edi
        mov     dword ptr [esi + 0x340], edi
        mov     eax, dword ptr [esi + 0x2a8]
        cmp     eax, edi
        jbe     short L5
        mov     eax, dword ptr [esi + 0x29c]
        cmp     eax, edi
        jz      short L5
        push    eax
        call    ebx
        add     esp, 4
L5:
        mov     dword ptr [esi + 0x29c], edi
        mov     dword ptr [esi + 0x2ac], edi
        mov     dword ptr [esi + 0x2a8], edi
        mov     eax, dword ptr [esi + 0x210]
        cmp     eax, edi
        jbe     short L6
        mov     eax, dword ptr [esi + 0x204]
        cmp     eax, edi
        jz      short L6
        push    eax
        call    ebx
        add     esp, 4
L6:
        mov     dword ptr [esi + 0x204], edi
        mov     dword ptr [esi + 0x214], edi
        mov     dword ptr [esi + 0x210], edi
        mov     eax, dword ptr [esi + 0x178]
        cmp     eax, edi
        jbe     short L7
        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, edi
        jz      short L7
        push    eax
        call    ebx
        add     esp, 4
L7:
        mov     dword ptr [esi + 0x16c], edi
        mov     dword ptr [esi + 0x17c], edi
        mov     dword ptr [esi + 0x178], edi
        mov     eax, dword ptr [esi + 0xe0]
        cmp     eax, edi
        jbe     short L8
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, edi
        jz      short L8
        push    eax
        call    ebx
        add     esp, 4
L8:
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xe4], edi
        mov     dword ptr [esi + 0xe0], edi
        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x18], edi
        cmp     eax, edi
        jbe     short L9
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, edi
        jz      short L9
        push    eax
        call    ebx
        add     esp, 4
L9:
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], edi
        mov     dword ptr [esi + 0x4c], edi
        mov     dword ptr [esi + 0x48], edi
        call    FUN_100067d0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], offset g_10021688
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
