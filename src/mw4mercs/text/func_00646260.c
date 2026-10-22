/*
 * FUN_00646260 (431 B) — __fastcall (ECX = this), RET (no stack args).
 *
 * Constructor: initializes a HUD object. Sets vtable, calls FUN_005614d0
 * twice with "hud\\hud4" strings, initializes fields, computes a couple of
 * float values, allocates a sub-object (FUN_004084d0 / FUN_00560190) and
 * configures it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7ddde0;
extern void __stdcall FUN_00561430(int a);
extern void __stdcall FUN_005614d0(void *a, int b, int c, int d, int e, int f, int g, int h);
extern void *__stdcall FUN_00561df0(void *a, void *b);
extern void *__stdcall FUN_00641050(void *a, void *b);
extern void __stdcall FUN_00561a30(void *a);
extern void *__stdcall FUN_005619f0(void *a, void *b, void *c);
extern void __stdcall FUN_0040c410(void *a);
extern void *__stdcall FUN_004084d0(int a);
extern void *__stdcall FUN_00560190(int a);
extern void __stdcall FUN_005603e0(int a, int b);
extern void __stdcall FUN_00560400(int a, int b);
extern void __stdcall FUN_00560420(void *a, int b, int c);

__declspec(naked) void __stdcall FUN_00646260(void)
{
    __asm {
        sub     esp, 0x34
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
        push    0x42e80000
        xor     ebx, ebx
        push    ebx
        push    0x42d20000
        push    ebx
        push    0x792448
        mov     ecx, esi
        mov     dword ptr [esi], 0x7926b4
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
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x1c]
        lea     edi, [esi + 0x38]
        push    edx
        mov     ecx, edi
        mov     dword ptr [esi + 0x14], 0x43f00000
        mov     dword ptr [esi + 0x18], 0x43fa0000
        mov     dword ptr [esi + 0x1c], 0x3f666666
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x10], eax
        jz      L_630e
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     L_6345
    L_630e:
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
    L_6345:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     edx, [esp + 0x28]
        fsub    dword ptr [eax + 0x4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 0x8]
        fmul    dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x34], 0x0
        fstp    dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x30], ecx
        lea     ecx, [esi + 0x20]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0040c410
        mov     eax, 0x3f800000
        mov     dword ptr [esi + 0x54], ebx
        push    0x138
        mov     dword ptr [esi + 0x6c], 0x58
        mov     dword ptr [esi + 0x50], 0xff
        mov     dword ptr [esi + 0x58], ebx
        mov     dword ptr [esi + 0x5c], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x60], eax
        mov     dword ptr [esi + 0x64], eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_63c1
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        mov     edi, eax
        jmp     L_63c3
    L_63c1:
        xor     edi, edi
    L_63c3:
        push    0x44014000
        push    0x44004000
        mov     ecx, edi
        mov     dword ptr [esi + 0x70], edi
        call    FUN_005603e0
        push    0x44070000
        push    0x440e8000
        mov     ecx, edi
        call    FUN_00560400
        push    ebx
        push    ebx
        mov     dword ptr [edi + 0x10c], ebx
        push    0x7926ac
        mov     ecx, edi
        mov     dword ptr [edi + 0x104], 0xffffffff
        call    FUN_00560420
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x34
        ret
    }
}
