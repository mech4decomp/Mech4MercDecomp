/*
 * FUN_00617530 (602 B) — __thiscall: builds a mission instance path
 * string ("content\\missions\\" + param_1 + ...), loads the mission
 * instance, rebuilds several sub-objects (0x10/0x18/0x40), and calls
 * FUN_00615ff0 to construct the full set of named sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void *g_0076b298;                 /* IAT: strstr */
extern void __cdecl FUN_00597370(void);
extern void __cdecl FUN_00412570(void *);
extern void *__cdecl FUN_004125e0(void *, void *);
extern void __cdecl FUN_00412740(void *);
extern void __cdecl FUN_0040d9b0(void);
extern void *__cdecl FUN_00595ae0(void *);
extern void __cdecl FUN_00619850(void);
extern void __cdecl FUN_004084e0(void *p);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_006199f0(void *);
extern void __cdecl FUN_006198c0(void);
extern void __cdecl FUN_00619b70(void *);
extern void __cdecl FUN_00416bc0(void *);
extern void *__cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00615ff0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_00617530(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi+0x34]
        mov     ecx, edi
        call    FUN_00597370
        push    0x78c50c
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        mov     ebx, dword ptr [esp+0x30]
        mov     eax, dword ptr [esp+0x10]
        push    ebx
        push    eax
        lea     ecx, [esp+0x38]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        lea     ecx, [esp+0x30]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp+0x10]
        push    0x76c5a8
        push    ecx
        lea     ecx, [esp+0x38]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        lea     ecx, [esp+0x30]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp+0x10]
        push    ebx
        push    edx
        lea     ecx, [esp+0x38]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        lea     ecx, [esp+0x30]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp+0x10]
        push    0x776484
        push    eax
        lea     ecx, [esp+0x38]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x14]
        call    FUN_00412740
        lea     ecx, [esp+0x30]
        call    FUN_0040d9b0
        push    ecx
        mov     ecx, dword ptr [esp+0x14]
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        mov     byte ptr [esi+0x71], 0x1
        jz      lbl_6175fd
        inc     byte ptr [eax-1]
lbl_6175fd:
        mov     ecx, edi
        call    FUN_00595ae0
        mov     ebp, dword ptr [esi+0x10]
        test    ebp, ebp
        mov     ebx, eax
        jz      lbl_61761d
        mov     ecx, ebp
        call    FUN_00619850
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
lbl_61761d:
        push    0xc
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      lbl_61763a
        mov     edx, dword ptr [edi+0x30]
        push    edx
        mov     ecx, ebp
        call    FUN_006199f0
        jmp     lbl_61763c
lbl_61763a:
        xor     ebp, ebp
lbl_61763c:
        mov     dword ptr [esi+0x10], ebp
        mov     ebp, dword ptr [esi+0x18]
        test    ebp, ebp
        jz      lbl_617656
        mov     ecx, ebp
        call    FUN_006198c0
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
lbl_617656:
        push    0xc
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      lbl_617675
        mov     eax, dword ptr [edi+0x40]
        push    eax
        mov     ecx, ebp
        call    FUN_00619b70
        mov     eax, ebp
        jmp     lbl_617677
lbl_617675:
        xor     eax, eax
lbl_617677:
        mov     ebp, dword ptr [ebx+0x40]
        lea     ecx, [esi+0x40]
        push    ecx
        lea     ecx, [esp+0x1c]
        mov     dword ptr [esi+0x18], eax
        call    FUN_00416bc0
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x18], 0x77a38c
        xor     edi, edi
        call    FUN_00416cc0
        test    eax, eax
        jz      lbl_6176be
lbl_6176a1:
        cmp     edi, ebp
        jle     lbl_6176b0
        mov     dword ptr [eax+0x18], 0x0
        mov     byte ptr [eax+0x1c], 0x0
lbl_6176b0:
        lea     ecx, [esp+0x18]
        inc     edi
        call    FUN_00416cc0
        test    eax, eax
        jnz     lbl_6176a1
lbl_6176be:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [esi+0x34]
        xor     ecx, eax
        mov     ecx, dword ptr [ecx+0xc]
        mov     eax, dword ptr [ebx+0x38]
        xor     ecx, 0x85739531
        mov     dword ptr [edx+0x48], ebx
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx+0x34]
        push    eax
        lea     ecx, [esp+0x18]
        call    FUN_00412570
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x2
        call    dword ptr [eax+0x34]
        mov     ecx, dword ptr [esi+0x6c]
        push    eax
        push    ecx
        call    dword ptr [g_0076b298]
        add     esp, 0x8
        test    eax, eax
        push    0x0
        jz      lbl_617729
        mov     edx, dword ptr [esp+0x18]
        push    0x1
        push    edx
        jmp     lbl_617730
lbl_617729:
        mov     eax, dword ptr [esp+0x18]
        push    0x0
        push    eax
lbl_617730:
        mov     ecx, esi
        call    FUN_00615ff0
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        mov     dword ptr [esi+0x80], 0x0
        jz      lbl_61775c
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_61775c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_61775c:
        lea     ecx, [esp+0x18]
        call    FUN_00416c60
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      lbl_617780
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_617780
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_617780:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0x4
    }
}
