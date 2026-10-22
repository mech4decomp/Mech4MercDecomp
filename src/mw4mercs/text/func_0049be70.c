/*
 * FUN_0049be70 (320 B) — MLR particle/flare object default-init (__fastcall).
 * Sets default curve/color parameters and calls sub-object initializers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0077022c;
extern float g_00770228;
extern void __cdecl FUN_00493880(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004aeb30(void);
extern void __cdecl FUN_004aebd0(void);
extern void __cdecl FUN_004ade00(void);
extern void __cdecl FUN_004ade20(void);

__declspec(naked) void FUN_0049be70(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_00493880
        mov     eax, dword ptr [g_0077022c]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x164], ebx
        mov     dword ptr [esi + 0x168], ebx
        mov     dword ptr [esi + 0x16c], ebx
        mov     dword ptr [esi + 0x1c], 0x41a00000
        push    eax
        lea     ecx, [esi + 0x68]
        mov     dword ptr [esi + 0x64], ebx
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x80]
        call    FUN_004aeb30
        push    0x40400000
        push    0x3f800000
        lea     ecx, [esi + 0x8c]
        mov     byte ptr [esi + 0x98], 0x1
        call    FUN_004aebd0
        mov     dword ptr [esi + 0xcc], ebx
        push    0x3f800000
        lea     ecx, [esi + 0xd0]
        mov     byte ptr [esi + 0xdc], bl
        call    FUN_004ade00
        push    0xc11ccccd
        lea     ecx, [esi + 0xe4]
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0xf8]
        mov     byte ptr [esi + 0x104], bl
        call    FUN_004ade00
        push    0x3e99999a
        lea     ecx, [esi + 0x10c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x118]
        mov     byte ptr [esi + 0x124], bl
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x12c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x138]
        mov     byte ptr [esi + 0x144], bl
        call    FUN_004ade00
        fld     dword ptr [g_00770228]
        push    0x3f800000
        fstp    dword ptr [esi + 0x150]
        push    0xbf800000
        lea     ecx, [esi + 0x154]
        mov     byte ptr [esi + 0x160], 0x1
        call    FUN_004ade20
        push    0x41a00000
        lea     ecx, [esi + 0xa0]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xac]
        mov     byte ptr [esi + 0xc0], bl
        call    FUN_004adfb0
        pop     esi
        pop     ebx
        ret
    }
}
