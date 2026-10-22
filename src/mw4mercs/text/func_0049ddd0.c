/*
 * FUN_0049ddd0 (500 B) - MLR particle/flare/debris object constructor
 * (__thiscall). Calls base constructor FUN_00493880, initializes a large
 * set of member sub-objects (floats, byte flags) via helper constructors
 * FUN_004ade00 / FUN_004aeb30 / FUN_004adfb0, then calls the two
 * __thiscall initializers FUN_0049f580 and FUN_0049e530.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493880(void);
extern void __cdecl FUN_004ade00(int arg);
extern void __cdecl FUN_004aeb30(int arg);
extern void __cdecl FUN_004adfb0(int arg);
extern void __cdecl FUN_0049f580(void);
extern void __cdecl FUN_0049e530(void);

__declspec(naked) void FUN_0049ddd0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_00493880
        xor     ebx, ebx
        mov     dword ptr [esi + 0x64], 0x40800000
        push    ebx
        lea     ecx, [esi + 0x70]
        mov     dword ptr [esi + 0x6c], 0x3f800000
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x7c]
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x88]
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x9c]
        mov     dword ptr [esi + 0x98], ebx
        call    FUN_004aeb30
        push    ebx
        lea     ecx, [esi + 0xac]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xb8]
        mov     byte ptr [esi + 0xcc], bl
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0xd4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xe0]
        mov     byte ptr [esi + 0xf4], bl
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0xfc]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x108]
        mov     byte ptr [esi + 0x114], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x11c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x128]
        mov     byte ptr [esi + 0x134], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x13c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x148]
        mov     byte ptr [esi + 0x154], bl
        call    FUN_004ade00
        push    0x3f800000
        lea     ecx, [esi + 0x15c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x168]
        mov     byte ptr [esi + 0x174], bl
        call    FUN_004ade00
        push    ebx
        lea     ecx, [esi + 0x17c]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x188]
        mov     byte ptr [esi + 0x19c], bl
        call    FUN_004adfb0
        push    ebx
        lea     ecx, [esi + 0x1a4]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0x1b0]
        mov     byte ptr [esi + 0x1c4], bl
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x1cc]
        call    FUN_004adfb0
        mov     byte ptr [esi + 0x1f4], bl
        push    0x3f800000
        lea     ecx, [esi + 0x1e0]
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x1fc]
        call    FUN_004adfb0
        push    0x3f800000
        lea     ecx, [esi + 0x210]
        mov     byte ptr [esi + 0x224], bl
        call    FUN_004adfb0
        mov     eax, 0x2
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x228], eax
        mov     dword ptr [esi + 0x22c], eax
        mov     byte ptr [esi + 0x230], bl
        mov     byte ptr [esi + 0x231], bl
        mov     byte ptr [esi + 0x232], bl
        mov     byte ptr [esi + 0x233], bl
        call    FUN_0049f580
        mov     ecx, esi
        call    FUN_0049e530
        pop     esi
        pop     ebx
        ret
    }
}
