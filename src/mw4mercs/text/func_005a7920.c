/*
 * FUN_005a7920 (132 B) — Destructor for light entity object.
 *
 * Resets vtable, destroys sub-objects, decrements refcount,
 * calls base destructor.
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a7e40(void);
extern void *__stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0041fc90(void);
extern void __stdcall FUN_005f07e0(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005a7920(void)
{
    
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        push    edi

        mov     dword ptr [esi], 0x784cf0
        call    FUN_005a7e40

        ; Sub-object at +0x180
        lea     ebx, [esi + 0x180]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      skip1

        mov     ecx, ebx
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]

skip1:
        ; Sub-object at +0x188
        lea     edi, [esi + 0x188]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      skip2

        mov     ecx, edi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x18]

skip2:
        ; Refcount at +0x190
        mov     eax, dword ptr [esi + 0x190]
        test    eax, eax
        jz      skip3

        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip3

        push    eax
        call    FUN_004084e0
        add     esp, 0x4

skip3:
        mov     ecx, edi
        call    FUN_0041fc90

        mov     ecx, ebx
        call    FUN_0041fc90

        mov     ecx, esi
        call    FUN_005f07e0

        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}
