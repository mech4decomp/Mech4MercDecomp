/*
 * FUN_005b11f0 (200 B) — __thiscall destructor (ECX = this). Sets the
 * vtable, tears down four sub-objects at this+0x5AC/0x5B4/0x5BC/0x5C4
 * (each: FUN_0041fd80 twice, then virtual call), destroys them via
 * FUN_0041fc90, and calls FUN_005b43d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0041fc90(void);
extern void __stdcall FUN_005b43d0(void);

__declspec(naked) void __fastcall FUN_005b11f0(void *this)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebp, [esi + 0x5AC]
        push    edi
        mov     ecx, ebp
        mov     dword ptr [esi], 0x785F4C
        call    FUN_0041fd80
        test    eax, eax
        jz      L1220
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      L1220
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L1220:
        lea     edi, [esi + 0x5B4]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L1244
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L1244
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L1244:
        lea     ebx, [esi + 0x5BC]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L1268
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L1268
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L1268:
        lea     edi, [esi + 0x5C4]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L128C
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L128C
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L128C:
        mov     ecx, edi
        call    FUN_0041fc90
        mov     ecx, ebx
        call    FUN_0041fc90
        lea     ecx, [esi + 0x5B4]
        call    FUN_0041fc90
        mov     ecx, ebp
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005b43d0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
