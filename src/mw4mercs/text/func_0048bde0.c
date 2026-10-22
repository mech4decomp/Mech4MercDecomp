/*
 * FUN_0048bde0 (659 B) — MLR renderer constructor (__thiscall, RET 0x8).
 * Initializes the renderer object: allocates/grows several internal
 * arrays (0x20/0x28-byte elements), sets up the vtable, and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_006f4950(void);
extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00491b20(void);
extern void __cdecl FUN_0048bc10(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0048f0c0(void);
extern void __cdecl FUN_0048ba50(void);
extern void __cdecl FUN_004801f0(void);
extern void __cdecl FUN_0048b960(void);
extern void __cdecl FUN_0048efc0(void);
extern void __cdecl FUN_006f49a0(void);
extern int g_007da834;
extern int g_007b957c;

__declspec(naked) void FUN_0048bde0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007da834]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edx, dword ptr [g_007b957c]
        mov     ecx, dword ptr [esp + 0x18]
        xor     edi, edi
        mov     dword ptr [esi + 0x124], edi
        mov     dword ptr [esi + 0x128], edi
        mov     dword ptr [esi + 0x12c], edi
        mov     dword ptr [esi + 0x130], edi
        mov     dword ptr [esi + 0x134], edi
        mov     dword ptr [esi + 0x138], edi
        mov     dword ptr [esi + 0x13c], edi
        mov     dword ptr [esi + 0x140], edi
        mov     dword ptr [esi + 0x144], edi
        mov     dword ptr [esi + 0x148], edi
        mov     dword ptr [esi + 0x14c], edi
        mov     dword ptr [esi + 0x150], edi
        mov     dword ptr [esi + 0x154], edi
        mov     dword ptr [esi + 0x158], edi
        mov     dword ptr [esi + 0x15c], edi
        mov     dword ptr [esi + 0x160], edi
        push    edx
        mov     dword ptr [esi + 0x10c], ecx
        mov     dword ptr [esi + 0x114], edi
        mov     dword ptr [esi + 0x118], edi
        mov     dword ptr [esi + 0x11c], edi
        mov     dword ptr [esi + 0x120], edi
        call    FUN_006f4950
        mov     ebp, dword ptr [esi + 0x128]
        cmp     ebp, 0x800
        jz      L_bf3f
        push    0x10000
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        mov     dword ptr [esp + 0x10], eax
        jz      L_bed2
        mov     ebx, eax
        mov     dword ptr [esp + 0x18], 0x800
L_beb3:
        mov     ecx, ebx
        call    FUN_00491b20
        mov     eax, dword ptr [esp + 0x18]
        add     ebx, 0x20
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jnz     L_beb3
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_bed8
L_bed2:
        mov     dword ptr [esp + 0x18], edi
        mov     ecx, edi
L_bed8:
        mov     eax, dword ptr [esi + 0x124]
        cmp     eax, edi
        jz      L_bf2f
        cmp     ebp, 0x800
        jbe     L_beef
        mov     ebp, 0x800
L_beef:
        mov     edx, ebp
        dec     ebp
        test    edx, edx
        jz      L_bf1c
        mov     ebx, ebp
        shl     ebx, 0x5
        sub     eax, ecx
        add     ebx, ecx
        mov     dword ptr [esp + 0x10], eax
        inc     ebp
        jmp     L_bf0a
L_bf06:
        mov     eax, dword ptr [esp + 0x10]
L_bf0a:
        add     eax, ebx
        push    eax
        mov     ecx, ebx
        call    FUN_0048bc10
        dec     ebp
        sub     ebx, 0x20
        cmp     ebp, edi
        ja      L_bf06
L_bf1c:
        mov     eax, dword ptr [esi + 0x124]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0x4
L_bf2f:
        mov     dword ptr [esi + 0x124], ecx
        mov     dword ptr [esi + 0x128], 0x800
L_bf3f:
        mov     ebp, dword ptr [esi + 0x130]
        cmp     ebp, 0x800
        jz      L_bfeb
        push    0x14000
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 0x4
        cmp     ebx, edi
        jz      L_bf7e
        push    0x491d80
        push    0x800
        push    0x28
        push    ebx
        call    FUN_00406c90
        mov     ecx, ebx
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_bf84
L_bf7e:
        mov     dword ptr [esp + 0x18], edi
        mov     ecx, edi
L_bf84:
        mov     eax, dword ptr [esi + 0x12c]
        cmp     eax, edi
        jz      L_bfdb
        cmp     ebp, 0x800
        jbe     L_bf9b
        mov     ebp, 0x800
L_bf9b:
        mov     edx, ebp
        dec     ebp
        test    edx, edx
        jz      L_bfc8
        lea     edx, [ebp + ebp*4]
        sub     eax, ecx
        lea     ebx, [ecx + edx*8]
        mov     dword ptr [esp + 0x10], eax
        inc     ebp
        jmp     L_bfb6
L_bfb2:
        mov     eax, dword ptr [esp + 0x10]
L_bfb6:
        add     eax, ebx
        push    eax
        mov     ecx, ebx
        call    FUN_0048f0c0
        dec     ebp
        sub     ebx, 0x28
        cmp     ebp, edi
        ja      L_bfb2
L_bfc8:
        mov     eax, dword ptr [esi + 0x12c]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0x4
L_bfdb:
        mov     dword ptr [esi + 0x12c], ecx
        mov     dword ptr [esi + 0x130], 0x800
L_bfeb:
        push    0x800
        lea     ecx, [esi + 0x134]
        call    FUN_0048ba50
        push    0x800
        lea     ecx, [esi + 0x13c]
        call    FUN_004801f0
        push    0x800
        lea     ecx, [esi + 0x144]
        call    FUN_0048b960
        push    0x800
        lea     ecx, [esi + 0x14c]
        call    FUN_0048efc0
        push    0x800
        lea     ecx, [esi + 0x154]
        call    FUN_0048ba50
        push    0x800
        lea     ecx, [esi + 0x15c]
        call    FUN_004801f0
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi + 0x10], edi
        pop     edi
        mov     dword ptr [esi + 0x110], eax
        mov     dword ptr [esi], 0x76febc
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
