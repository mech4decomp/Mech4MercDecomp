/*
 * FUN_00481490 (195 B) — __thiscall MLR LightMap loader/constructor.
 * Calls FUN_004820b0, sets vtable 0x76f988, looks up a "LightMap"
 * resource (FUN_00411bf0), allocates/constructs a 0x24-byte object
 * (FUN_0048fac0/FUN_0048f380/FUN_004084d0/FUN_00422ea0), stores it at
 * this+0x8c, then sets up a "Spread" value (FUN_00411d60) and calls
 * FUN_00481710.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da69c;
extern int g_007da848;
extern void __cdecl FUN_004820b0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00422ea0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00481710(void);

__declspec(naked) void FUN_00481490(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007da69c]
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    esi
        push    ebx
        mov     esi, ecx
        push    eax
        call    FUN_004820b0
        push    0x0
        lea     ecx, [esp+0x14]
        push    ecx
        push    0x76e100
        mov     ecx, ebx
        mov     dword ptr [esi], 0x76f988
        mov     dword ptr [esi+0x8c], 0
        call    FUN_00411bf0
        test    al, al
        jz      L_481524
        mov     edx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [g_007da848]
        push    edi
        push    0x0
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_4814f8
        mov     ecx, dword ptr [g_007da848]
        push    eax
        mov     eax, dword ptr [esp+0x18]
        push    eax
        call    FUN_0048f380
        mov     edi, eax
L_4814f8:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_481510
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_481512
L_481510:
        xor     eax, eax
L_481512:
        mov     ecx, dword ptr [eax+8]
        inc     ecx
        mov     dword ptr [esi+0x8c], eax
        mov     dword ptr [eax+8], ecx
        or      dword ptr [esi+0x78], 0x40
        pop     edi
L_481524:
        push    0x0
        lea     ecx, [esp+0xc]
        push    ecx
        push    0x76e0f8
        mov     ecx, ebx
        mov     dword ptr [esp+0x14], 0x42340000
        call    FUN_00411d60
        lea     edx, [esp+0x8]
        push    edx
        mov     ecx, esi
        call    FUN_00481710
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
