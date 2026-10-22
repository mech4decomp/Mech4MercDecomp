/*
 * FUN_006e4a30 (398 B) — __cdecl, no params, plain RET.
 * Options/settings teardown: calls a series of virtual methods on a
 * global object (via DAT_007dab44 ^ DAT_007dab40), frees sub-objects,
 * and invokes several option-save helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int a);
extern void __cdecl  FUN_004c8e90(int a);
extern void __cdecl  FUN_006f49a0(void);
extern void __cdecl  FUN_0040dca0(void);
extern void __stdcall FUN_006f2bc0(void *p);
extern void __cdecl  FUN_006f1650(void);
extern void __cdecl  FUN_004084e0(void *p);
extern void __cdecl  FUN_006f0ff0(void);
extern void __cdecl  FUN_0040e4a0(void);
extern void __cdecl  FUN_0040de20(void);
extern void __stdcall FUN_0050e840(void *p);
extern void __stdcall FUN_004d5330(void *p);
extern void __stdcall FUN_006cf300(void *p);
extern void __stdcall FUN_004af160(void *p);
extern void __stdcall FUN_00493350(void *p);
extern void __stdcall FUN_00421b90(void *p);
extern void __cdecl  FUN_00414e80(void);

extern int g_007dd234;
extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __cdecl FUN_006e4a30(void)
{
    __asm {
        mov     eax, dword ptr [g_007dd234]
        sub     esp, 0x50
        push    esi
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x18]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        jz      L_4a96
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_4a96:
        push    0x3
        call    FUN_004c8e90
        add     esp, 0x4
        call    FUN_006f49a0
        push    0x1
        push    0x0
        push    0x76c6b4
        lea     ecx, [esp + 0x10]
        call    FUN_0040dca0
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     esi, dword ptr [g_007dab40]
        lea     ecx, [esp + 0x4]
        push    ecx
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x24]
        xor     ecx, 0x85739531
        call    FUN_006f2bc0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     esi, dword ptr [edx + 0x24]
        xor     esi, 0x85739531
        jz      L_4b03
        mov     ecx, esi
        call    FUN_006f1650
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4b03:
        push    0x9
        call    FUN_004c8e90
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     esi, dword ptr [ecx + 0x28]
        add     esp, 0x4
        xor     esi, 0x85739531
        jz      L_4b35
        mov     ecx, esi
        call    FUN_006f0ff0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4b35:
        push    0xa
        call    FUN_004c8e90
        add     esp, 0x4
        lea     ecx, [esp + 0x4]
        call    FUN_0040e4a0
        lea     ecx, [esp + 0x4]
        call    FUN_0040de20
        push    0x1
        push    0x0
        push    0x76c6b4
        lea     ecx, [esp + 0x10]
        call    FUN_0040dca0
        lea     edx, [esp + 0x4]
        push    edx
        call    FUN_0050e840
        lea     eax, [esp + 0x8]
        push    eax
        call    FUN_004d5330
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_006cf300
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_004af160
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_00493350
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_00421b90
        add     esp, 0x18
        lea     ecx, [esp + 0x4]
        call    FUN_0040e4a0
        lea     ecx, [esp + 0x4]
        call    FUN_0040de20
        call    FUN_00414e80
        pop     esi
        add     esp, 0x50
        ret
    }
}
