/*
 * FUN_00665E00 (504 B) — __fastcall (ECX = param_1), plain RET, returns EAX.
 *
 * HUD constructor: sets vtable, calls FUN_005614d0 with a format string,
 * then walks a data table via FUN_00561df0/FUN_00641050/FUN_00561a30/
 * FUN_005619f0/FUN_00641000/FUN_00641010, computing float deltas and
 * storing them into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561430(int a);
extern void __cdecl FUN_005614d0(int a, int b, int c, int d, int e, int f, int g, int h);
extern int *__fastcall FUN_00561df0(void *this, void *a, void *b);
extern int __cdecl FUN_00641050(void *a, void *b);
extern void __cdecl FUN_00561a30(void *a, void *b, void *c);
extern int *__fastcall FUN_005619f0(void *this, void *a, void *b, void *c);
extern int *__fastcall FUN_00641000(void *this, void *a);
extern int *__fastcall FUN_00641010(void *this, void *a, void *b);

extern int g_7ddde0;
extern float g_76d070;

__declspec(naked) void *__fastcall FUN_00665e00(void *param_1)
{
    __asm {
        sub     esp, 0x30
        mov     eax, dword ptr [g_7ddde0]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x433f0000
        push    0x425c0000
        push    0x43270000
        push    0x41100000
        xor     ebx, ebx
        push    ebx
        push    0x792448
        mov     ecx, esi
        mov     dword ptr [esi], 0x795480
        call    FUN_005614d0
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x1c]
        lea     edi, [esi + 0x38]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x10], eax
        jz      L671
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L6a8
L671:
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
L6a8:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [esp + 0xc]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     edx, [esp + 0x20]
        fmul    dword ptr [eax + 0x14]
        push    edx
        mov     ecx, edi
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x14], ebx
        fstp    dword ptr [esp + 0x3c]
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [edx]
        jz      L6ff
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L736
L6ff:
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x30]
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
L736:
        fld     dword ptr [esp + 0x30]
        mov     eax, dword ptr [eax + 0x14]
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [esp + 0x34]
        lea     ecx, [esp + 0x10]
        fmul    dword ptr [g_76d070]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        fstp    dword ptr [eax + 0x2c]
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, dword ptr [edx]
        jz      L787
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L7be
L787:
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0xc], eax
L7be:
        mov     ecx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esi + 0x24], eax
        pop     edi
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x58], ebx
        mov     dword ptr [esi + 0x60], ebx
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x6c], ebx
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x5c], 0xff
        mov     eax, esi
        pop     esi
        mov     byte ptr [ecx + 0x40], 0x1
        pop     ebx
        add     esp, 0x30
        ret
    }
}
