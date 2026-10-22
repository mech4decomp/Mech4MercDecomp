/*
 * FUN_0065c010 (143 B) — __fastcall (ECX = this), RET. Calls a virtual
 * method at vtable+0x2c; if it returns nonzero, calls FUN_005dd7a0 /
 * FUN_0069eb70 and conditionally frees a buffer via FUN_004084e0. Then
 * calls FUN_0065ab00, a virtual at vtable+0x8, FUN_0065ad40, and
 * FUN_0065ab50, storing the result at this+0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_005dd7a0(int *p);
extern void __cdecl FUN_0069eb70(int a, int b);
extern void __cdecl FUN_004084e0(int p);
extern void __cdecl FUN_0065ab00(int a, int b);
extern int __cdecl FUN_0065ad40(int a, int b, int c);
extern int __cdecl FUN_0065ab50(int a, int b, int c);

__declspec(naked) void __fastcall FUN_0065c010(int thisptr)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      l_51
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    0x4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      l_51
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_51
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_51:
        mov     edi, dword ptr [esi + 0x4]
        push    0x1
        push    edi
        call    FUN_0065ab00
        mov     edx, dword ptr [esi]
        add     esp, 0x8
        mov     ecx, esi
        mov     byte ptr [edi + 0x614], 0x1
        mov     dword ptr [esi + 0x14], 0x0
        call    dword ptr [edx + 0x8]
        push    0x44fa0000
        push    0x3ed
        push    0x0
        mov     ecx, esi
        call    FUN_0065ad40
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x4]
        push    ecx
        push    eax
        push    edx
        call    FUN_0065ab50
        add     esp, 0xc
        pop     edi
        mov     dword ptr [esi + 0x14], eax
        pop     esi
        pop     ecx
        ret
    }
}
