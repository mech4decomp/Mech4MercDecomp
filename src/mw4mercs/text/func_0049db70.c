/*
 * FUN_0049db70 (595 B) - MLR particle/flare/debris object initializer
 * (__thiscall, RET 0x4). Takes a source object pointer (arg at [esp+0x8])
 * and copies/initializes a large set of member sub-objects via a series of
 * helper constructors (FUN_00493940, FUN_004add70, FUN_004addb0,
 * FUN_004ae560, FUN_004adf40) and virtual method calls through the source
 * object's vtable at offset 0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493940(void *src);
extern void __cdecl FUN_004add70(void *src);
extern void __cdecl FUN_004addb0(void *src);
extern void __cdecl FUN_004ae560(void *src);
extern void __cdecl FUN_004adf40(void *src);

__declspec(naked) void FUN_0049db70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00493940
        push    esi
        lea     ecx, [edi + 0x60]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x68]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x70]
        call    FUN_004addb0
        push    esi
        lea     ecx, [edi + 0x7c]
        call    FUN_004addb0
        push    esi
        lea     ecx, [edi + 0x88]
        call    FUN_004addb0
        push    esi
        lea     ecx, [edi + 0x94]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x9c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xac]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xb8]
        call    FUN_004adf40
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi + 0xcc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0xd4]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xe0]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0xf4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xfc]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x108]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x114]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x11c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x128]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x134]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x13c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x148]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x15c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x168]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x174]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x17c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x188]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x19c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x1a4]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x1b0]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1c4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x1cc]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0x1e0]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x1f4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x1fc]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0x210]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x224]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x22c]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x228]
        mov     dword ptr [esp + 0x10], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x231]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x1
        lea     ecx, [edi + 0x230]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x232]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x1
        add     edi, 0x233
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
