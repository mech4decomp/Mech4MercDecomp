/*
 * FUN_00412b80 (107 B) — __fastcall method (RET 0x4). String-system object
 * method that reads the caller's return address as a struct pointer, calls
 * virtual methods on [this+0x10], and helper FUN_0041e690/9e0/710.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e9e0(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void FUN_00412b80(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x10]
        push    edi
        lea     esi, [ebx + 0x10]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x30]
        mov     edi, dword ptr [ecx + 0x24]
        mov     eax, dword ptr [ecx + 0x20]
        add     ecx, 0x10
        sub     edi, eax
        mov     dword ptr [esi + 0x8], 0xffffffec
        jz      done
        mov     edx, dword ptr [ecx]
        push    0x0
        push    edi
        call    dword ptr [edx + 0x4]
        sub     eax, edi
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0041e690
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        call    FUN_0041e9e0
        add     esp, 0x8
        lea     ecx, [esp + 0xc]
        call    FUN_0041e710
done:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x20
        ret     0x4
    }
}
