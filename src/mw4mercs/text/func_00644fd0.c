/*
 * FUN_00644fd0 (472 B) — __thiscall (ECX = this), RET 0.
 *
 * Constructor-style initializer: sets up HUD sub-objects, computes a
 * vector via FPU, and allocates/initializes a child object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_7ddde0;

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00560420(void);

__declspec(naked) void __stdcall FUN_00644fd0(void)
{
    __asm {
        sub     esp, 0x3c
        mov     eax, dword ptr [g_7ddde0]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x42ae0000
        push    0x42ce0000
        xor     ebx, ebx
        push    ebx
        push    0x42ba0000
        push    ebx
        push    0x792448
        mov     ecx, esi
        mov     dword ptr [esi], 0x792650
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43310000
        push    0x42ce0000
        push    0x42b20000
        push    0x42b80000
        push    0x1
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esp + 0x28], 0x439e8000
        mov     dword ptr [esp + 0x2c], 0x43fa8000
        mov     dword ptr [esp + 0x30], 0x3f666666
        call    FUN_0040c410
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0x1c]
        lea     edi, [esi + 0x38]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00561df0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        mov     dword ptr [esp + 0x10], ecx
        push    edx
        mov     ecx, edi
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [ecx]
        jz      L_450a0
        mov     edx, dword ptr [esp + 0xc]
        cmp     edx, dword ptr [eax + 0x10]
        jge     L_450d7
L_450a0:
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
L_450d7:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     edx, [esp + 0x30]
        fsub    dword ptr [eax + 0x4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 0x8]
        fmul    dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x3c], 0x0
        fstp    dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x38], ecx
        lea     ecx, [esi + 0x20]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0040c410
        mov     dword ptr [esi + 0x54], ebx
        push    0x138
        mov     dword ptr [esi + 0x70], 0x58
        mov     dword ptr [esi + 0x50], 0xff
        mov     dword ptr [esi + 0x58], ebx
        mov     dword ptr [esi + 0x64], 0xffff0000
        mov     dword ptr [esi + 0x60], 0xffffff00
        mov     dword ptr [esi + 0x5c], 0xff009000
        mov     dword ptr [esi + 0x68], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_4515a
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     L_4515c
L_4515a:
        xor     edi, edi
L_4515c:
        push    0x44014000
        push    0x43670000
        mov     ecx, edi
        mov     dword ptr [esi + 0x74], edi
        call    FUN_005603e0
        push    0x44070000
        push    0x43900000
        mov     ecx, edi
        call    FUN_00560400
        push    ebx
        push    ebx
        mov     dword ptr [edi + 0x10c], ebx
        push    0x79264c
        mov     ecx, edi
        mov     dword ptr [edi + 0x104], 0xffffffff
        call    FUN_00560420
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret
    }
}
