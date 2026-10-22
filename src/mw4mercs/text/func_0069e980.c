/*
 * FUN_0069e980 (484 B) — __thiscall periodic update. Runs a timer-based
 * check, iterates a list of objects applying a filter, and conditionally
 * invokes a sub-update. Uses FUN_00707e70 for time values.
 *
 * __thiscall (ECX = this), RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_0076d970;
extern float g_00799a2c;
extern double g_00799a30;
extern int g_007f23b0;
extern int g_007dab44;
extern int g_007dab40;

extern float __stdcall FUN_00707e70(int id);
extern void *__cdecl FUN_0064e100(void);
extern void __stdcall FUN_00580540(void *p);
extern void __stdcall FUN_0064dfc0(void *p);
extern void __cdecl FUN_00581300(void *a, void *b, void *c, void *d, int e);
extern char __stdcall FUN_00415230(void *p);
extern char __cdecl FUN_005c9800(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __stdcall FUN_00412570(void *p);
extern void __stdcall FUN_0069eb70(int a, void *b);

__declspec(naked) void __cdecl FUN_0069e980(void)
{
    __asm {
        sub     esp, 0xc
        push    ebp
        mov     ebp, ecx
        fld     qword ptr [ebp + 0x80]
        fcomp   qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_9bf
        fld     dword ptr [g_00799a2c]
        push    0
        fadd    qword ptr [ebp + 0x80]
        fstp    qword ptr [esp + 8]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        jnz     L_eb5d
L_9bf:
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     ecx, esi
        call    FUN_0064e100
        mov     ecx, dword ptr [eax + 4]
        sub     ecx, dword ptr [eax]
        sar     ecx, 2
        cmp     ecx, 1
        jbe     L_eab4
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00580540
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    FUN_0064dfc0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, eax
        sub     edx, ecx
        sar     edx, 2
        cmp     edx, 1
        jbe     L_ea96
        lea     edx, [ecx + 4]
        cmp     edx, eax
        jz      L_ea30
        mov     esi, dword ptr [esp + 0x1c]
        push    0
        push    esi
        push    ecx
        push    eax
        push    edx
        call    FUN_00581300
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0x14
L_ea30:
        sub     eax, 4
        cmp     ecx, eax
        mov     dword ptr [esp + 0x10], eax
        mov     edi, ecx
        jz      L_eaa7
L_ea3d:
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [edx + 0x2fc]
        test    esi, esi
        jz      L_ea8d
        cmp     byte ptr [esi + 0x2f2], 1
        jnz     L_ea8d
        mov     dl, byte ptr [esi + 0x2f9]
        test    dl, dl
        jnz     L_ea8d
        mov     eax, dword ptr [g_007f23b0]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     L_ea85
        mov     ecx, esi
        call    FUN_005c9800
        test    al, al
        jz      L_ea96
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        jnz     L_ea96
L_ea85:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
L_ea8d:
        add     edi, 4
        cmp     edi, eax
        jz      L_eaa7
        jmp     L_ea3d
L_ea96:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [ebp + 0x88]
        mov     ecx, dword ptr [esp + 0xc]
L_eaa7:
        test    ecx, ecx
        jz      L_eab4
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_eab4:
        fld     qword ptr [ebp + 0x88]
        pop     edi
        fcomp   qword ptr [g_0076d970]
        pop     esi
        fnstsw  ax
        test    ah, 0x40
        jnz     L_eb50
        fld     qword ptr [g_00799a30]
        push    0
        fadd    qword ptr [ebp + 0x88]
        fstp    qword ptr [esp + 8]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_eb50
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        test    al, al
        jnz     L_eb50
        push    0x76b768
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        lea     eax, [esp + 0x14]
        push    eax
        push    0xa
        mov     ecx, ebp
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_eb43
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_eb43
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_eb43:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [ebp + 0x88]
L_eb50:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [ebp + 0x80]
L_eb5d:
        pop     ebp
        add     esp, 0xc
        ret     8
    }
}
