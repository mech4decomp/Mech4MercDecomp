/*
 * FUN_00408500 (1534 B) — engine init: builds a large set of string-table /
 * command objects (many __thiscall string ops), allocates/frees nodes, and
 * returns AL=1. All branches are forward-only.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b8810;   /* DAT_007b8810 */
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040e500(void);
extern void __cdecl FUN_0040edc0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_004123f0(void);
extern void __cdecl FUN_00411ba0(void);
extern void __cdecl FUN_00411c80(void);
extern void __cdecl FUN_00411f50(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040eef0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_006fb7c0(void);

__declspec(naked) void FUN_00408500(void)
{
    __asm {
        sub     esp, 0x144
        push    0x0
        lea     ecx, [esp + 0x58]
        call    FUN_0040dd50
        mov     eax, dword ptr [g_007b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L_408541
        lea     ecx, [esp + 0x98]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0x98]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        jmp     L_408543
    L_408541:
        xor     eax, eax
    L_408543:
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        push    0x76cd50
        lea     ecx, [esp + 0x68]
        call    FUN_0040e500
        push    0x76cd48
        lea     ecx, [esp + 0x68]
        call    FUN_0040edc0
        mov     ebx, eax
        push    0x76cd3c
        push    0x76cd34
        mov     ecx, ebx
        call    FUN_00411c40
        push    0x76cd48
        lea     ecx, [esp + 0x68]
        call    FUN_0040ecc0
        push    0x76cd2c
        push    0x76cd24
        mov     ecx, ebx
        call    FUN_00411c40
        push    0x76cd1c
        lea     ecx, [esp + 0x68]
        call    FUN_0040edc0
        mov     edi, eax
        push    0x76cd18
        push    0x76cd10
        mov     ecx, edi
        call    FUN_00411c40
        push    0x76cd08
        lea     ecx, [esp + 0x68]
        call    FUN_0040edc0
        mov     esi, eax
        push    0x76ccfc
        push    0x76ccf4
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76ccec
        lea     ecx, [esp + 0x68]
        call    FUN_0040edc0
        push    0x76cce0
        push    0x76ccd8
        mov     ecx, ebx
        mov     ebp, eax
        call    FUN_00411c40
        push    0x76ccfc
        push    0x76cd34
        mov     ecx, edi
        call    FUN_00411c40
        push    0x1
        push    0x76cd10
        mov     ecx, esi
        call    FUN_00411f20
        push    0x76cccc
        push    0x76ccd8
        mov     ecx, ebp
        call    FUN_00411c40
        push    0x76ccc4
        lea     ecx, [esp + 0x68]
        call    FUN_0040edc0
        push    0x76cd3c
        push    0x76cd10
        mov     ecx, eax
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00411c40
        push    0x0
        push    0x76cd24
        mov     ecx, esi
        call    FUN_00411f20
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_0040dd50
        push    0x76ccb8
        lea     ecx, [esp + 0x18]
        call    FUN_0040edc0
        push    0x76cd3c
        push    0x76ccb0
        mov     ecx, eax
        call    FUN_00411c40
        lea     eax, [esp + 0x14]
        push    eax
        push    0x76cd24
        mov     ecx, edi
        call    FUN_004123f0
        push    0x76ccb0
        mov     ecx, ebp
        call    FUN_00411ba0
        push    0x76cd10
        mov     ecx, edi
        call    FUN_00411ba0
        push    0x76ccac
        push    0x76ccb0
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cccc
        push    0x76ccd8
        mov     ecx, ebx
        call    FUN_00411c40
        push    0x76cd18
        push    0x76ccb0
        mov     ecx, edi
        call    FUN_00411c40
        mov     ecx, dword ptr [esp + 0x10]
        push    0x76ccfc
        push    0x76cd10
        call    FUN_00411c80
        push    0x76cca8
        push    0x76ccd8
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cce0
        push    0x76ccb0
        mov     ecx, ebp
        call    FUN_00411c40
        push    0x76cd2c
        push    0x76cca0
        mov     ecx, edi
        call    FUN_00411c40
        push    0x1
        push    0x76cca0
        mov     ecx, esi
        call    FUN_00411f50
        push    0x76cd18
        push    0x76cd24
        mov     ecx, ebp
        call    FUN_00411c40
        push    0x0
        push    0x76cd34
        mov     ecx, esi
        call    FUN_00411f20
        push    0x76cd50
        lea     ecx, [esp + 0x68]
        call    FUN_0040e500
        mov     ecx, dword ptr [g_007b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L_40879a
        lea     edx, [esp + 0xa8]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [esp + 0xa8]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cd64
        jmp     L_40879c
    L_40879a:
        xor     eax, eax
    L_40879c:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_4087a9
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], edx
    L_4087a9:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_4087b6
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], ecx
    L_4087b6:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_4087c3
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], edx
    L_4087c3:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_4087d0
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], ecx
    L_4087d0:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_4087dd
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], edx
    L_4087dd:
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [g_007b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 0xc
        test    eax, eax
        jz      L_408813
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0xa8]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        jmp     L_408815
    L_408813:
        xor     eax, eax
    L_408815:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        push    0x0
        push    0x0
        push    0x76cd50
        lea     ecx, [esp + 0xc0]
        call    FUN_0040dca0
        push    0x76ccc4
        lea     ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0xc
        mov     esi, eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_408867
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cc9c
        jmp     L_408869
    L_408867:
        xor     eax, eax
    L_408869:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_408876
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], edx
    L_408876:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_408883
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], ecx
    L_408883:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        push    0x76cc94
        lea     ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0x76cd48
        lea     ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0x76cd1c
        lea     ecx, [esp + 0xb8]
        call    FUN_0040ecc0
        push    0x76cd08
        lea     ecx, [esp + 0xb8]
        mov     esi, eax
        call    FUN_0040ecc0
        push    0x0
        lea     ecx, [esp + 0x108]
        call    FUN_0040dd50
        push    0x76ccb8
        lea     ecx, [esp + 0x108]
        call    FUN_0040ecc0
        push    0x76cd48
        lea     ecx, [esp + 0xb8]
        call    FUN_0040eef0
        push    0x76ccb0
        mov     ecx, esi
        call    FUN_00411ba0
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_408930
        mov     edx, dword ptr [esi + 0x18]
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cc9c
        jmp     L_408932
    L_408930:
        xor     eax, eax
    L_408932:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [esp + 0x104]
        mov     byte ptr [esp + 0xb8], 0x0
        call    FUN_0040de20
        lea     ecx, [esp + 0xb4]
        call    FUN_0040de20
        lea     ecx, [esp + 0x14]
        call    FUN_0040de20
        lea     ecx, [esp + 0x64]
        call    FUN_0040de20
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_0040dd50
        push    0x76cd1c
        lea     ecx, [esp + 0x18]
        call    FUN_0040edc0
        mov     esi, eax
        push    0x76cc84
        push    0x76cc74
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cc6c
        push    0x76cc64
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cc50
        mov     ecx, esi
        call    FUN_00411b00
        push    0x76cc3c
        push    0x76cc30
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cd50
        push    0x76cc28
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cc1c
        lea     ecx, [esp + 0x18]
        call    FUN_0040e500
        lea     ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0x0
        lea     ecx, [esp + 0x18]
        call    FUN_0040dd50
        push    0x76cc14
        lea     ecx, [esp + 0x18]
        call    FUN_0040edc0
        mov     esi, eax
        push    0x76cc08
        push    0x76cc00
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cbf4
        push    0x76cbec
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cbdc
        push    0x76cbd0
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cbb8
        push    0x76cba8
        mov     ecx, esi
        call    FUN_00411c40
        push    0x76cba0
        lea     ecx, [esp + 0x18]
        call    FUN_0040e500
        lea     ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0x0
        push    0x2
        push    0x76cc1c
        lea     ecx, [esp + 0x20]
        call    FUN_0040dca0
        push    0x76cc14
        lea     ecx, [esp + 0x18]
        call    FUN_0040ecc0
        push    0x76cd1c
        lea     ecx, [esp + 0x18]
        call    FUN_0040ecc0
        lea     ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0x0
        push    0x0
        push    0x76cc1c
        lea     ecx, [esp + 0x20]
        call    FUN_0040dca0
        push    0x76cd50
        lea     ecx, [esp + 0x18]
        call    FUN_0040e500
        push    0x76cc14
        lea     ecx, [esp + 0x18]
        call    FUN_0040ecc0
        lea     ecx, [esp + 0x14]
        call    FUN_0040de20
        push    0x76cc1c
        call    FUN_006fb7c0
        push    0x76cba0
        call    FUN_006fb7c0
        push    0x76cd50
        call    FUN_006fb7c0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x144
        ret
    }
}
