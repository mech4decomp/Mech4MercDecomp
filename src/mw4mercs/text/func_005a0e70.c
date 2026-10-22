/*
 * FUN_005a0e70 (91 B) — Destructor helper (__thiscall). Frees sub-objects,
 * calls virtual destructors on sub-objects, and calls base destructor.
 *
 * __thiscall (ECX = this), no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_005f36e0(void);

void __declspec(naked) __cdecl FUN_005a0e70(void)
{
    
__asm {
push    esi
        mov     esi, ecx

        mov     eax, dword ptr [esi + 0x534]
        test    eax, eax
        mov     dword ptr [esi], 0x783d44
        jz      skip_free1

        push    eax
        call    FUN_004084e0
        add     esp, 0x4

skip_free1:
        mov     ecx, dword ptr [esi + 0x538]
        test    ecx, ecx
        jz      skip_vcall1

        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]

skip_vcall1:
        mov     ecx, dword ptr [esi + 0x53c]
        test    ecx, ecx
        jz      skip_vcall2

        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]

skip_vcall2:
        lea     ecx, [esi + 0x520]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x518]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005f36e0
        pop     esi
        ret
    }


}
