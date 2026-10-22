/*
 * FUN_00422c30 (512 B) — MLR global state destructor/cleanup. Releases all
 * the singleton objects allocated by FUN_004227d0 (lightmaps, vertex
 * buffers, render-state arrays), decrements refcounts, and frees the
 * stream object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00480470(void);
extern void __cdecl FUN_00406cc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00423b30(void);
extern void __cdecl FUN_00423b50(void);
extern void __cdecl FUN_00423b20(void);
extern void __cdecl FUN_00423b10(void);
extern void __cdecl FUN_00423b40(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_00422e30(void);

extern int g_007b95cc;
extern int g_007b95e0;
extern int g_007b95dc;
extern int g_007b95d8;
extern int g_007b95d4;
extern int g_007b95d0;
extern int g_007b95f8;
extern int g_007b95f4;
extern int g_007b95f0;
extern int g_007b95ec;
extern int g_007b95e4;
extern int g_007b960c;
extern int g_007b9610;

__declspec(naked) void FUN_00422c30(void)
{
    __asm {
        mov     eax, dword ptr [g_007b95cc]
        push    esi
        lea     ecx, [eax+0x30]
        call    FUN_00480470
        mov     ecx, dword ptr [g_007b95cc]
        call    FUN_00480470
        mov     eax, dword ptr [g_007b95cc]
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [eax-0x4]
        lea     esi, [eax-0x4]
        push    offset FUN_00422e30
        push    ecx
        push    0x30
        push    eax
        call    FUN_00406cc0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     esi, dword ptr [g_007b95e0]
        test    esi, esi
        jz      L2
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L2:
        mov     esi, dword ptr [g_007b95dc]
        test    esi, esi
        jz      L4
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L5:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L4:
        mov     esi, dword ptr [g_007b95d8]
        test    esi, esi
        jz      L6
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L6:
        mov     esi, dword ptr [g_007b95d4]
        test    esi, esi
        jz      L8
        mov     ecx, esi
        call    FUN_00423b30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L8:
        mov     esi, dword ptr [g_007b95d0]
        test    esi, esi
        jz      L9
        mov     ecx, esi
        call    FUN_00423b50
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L9:
        mov     esi, dword ptr [g_007b95f8]
        test    esi, esi
        jz      L10
        mov     ecx, esi
        call    FUN_00423b20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L10:
        mov     esi, dword ptr [g_007b95f4]
        test    esi, esi
        jz      L11
        mov     ecx, esi
        call    FUN_00423b30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L11:
        mov     esi, dword ptr [g_007b95f0]
        test    esi, esi
        jz      L12
        mov     ecx, esi
        call    FUN_00423b10
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L12:
        mov     esi, dword ptr [g_007b95ec]
        test    esi, esi
        jz      L13
        mov     ecx, esi
        call    FUN_00423b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L13:
        mov     eax, dword ptr [g_007b95e4]
        mov     ecx, dword ptr [eax+0x4]
        xor     esi, esi
        test    ecx, ecx
        jbe     L14
L15:
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [edx+esi*4]
        dec     word ptr [ecx+0x8]
        cmp     word ptr [ecx+0x8], 0x0
        jnz     L16
        test    ecx, ecx
        jz      L16
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     eax, dword ptr [g_007b95e4]
L16:
        mov     ecx, dword ptr [eax+0x4]
        inc     esi
        cmp     esi, ecx
        jc      L15
L14:
        mov     esi, eax
        test    esi, esi
        jz      L17
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L18
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L18:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L17:
        mov     esi, dword ptr [g_007b960c]
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx+0xc]
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esi+0x8], 0xffffffec
        call    dword ptr [eax+0x4]
        mov     ecx, dword ptr [g_007b960c]
        test    ecx, ecx
        mov     esi, eax
        jz      L19
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L19:
        push    esi
        mov     dword ptr [g_007b960c], 0x0
        call    FUN_004084e0
        mov     esi, dword ptr [g_007b9610]
        add     esp, 0x4
        test    esi, esi
        jz      L20
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L20:
        mov     dword ptr [g_007b9610], 0x0
        pop     esi
        ret
    }
}
