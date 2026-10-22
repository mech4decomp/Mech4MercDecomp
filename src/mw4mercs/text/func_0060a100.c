/*
 * FUN_0060a100 (137 B) — __fastcall (ECX = param_1), RET.
 * If this+0x2c is 0 and this+0x4 is non-null, fetches the object at
 * this+0x4->+0xd8, saves its +0x80 matrix (0x30 bytes), calls
 * FUN_0041acb0/FUN_0041ae80/FUN_0041a070, sets flags at +0x18, invokes
 * virtual methods at vtbl+0x10 and +0x1c, and restores the matrix at +0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041ae80(void);
extern void __cdecl FUN_0041a070(void);

extern float g_0076ed00;

__declspec(naked) void __fastcall FUN_0060a100(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x2c]
        sub     esp, 0x3c
        test    eax, eax
        jnz     l_a185
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      l_a185
        push    ebx
        mov     ebx, dword ptr [eax + 0xd8]
        push    esi
        push    edi
        lea     eax, [ebx + 0x80]
        mov     esi, eax
        mov     ecx, 0xc
        lea     edi, [esp + 0x18]
        rep movsd
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_0041acb0
        lea     ecx, [esp + 0xc]
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [g_0076ed00]
        fstp    dword ptr [esp + 0xc]
        call    FUN_0041ae80
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0041a070
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     ecx, 0xfffffffe
        or      ecx, 0x4
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        lea     edi, [ebx + 0x20]
        mov     ecx, 0xc
        lea     esi, [esp + 0x18]
        rep movsd
        mov     ecx, ebx
        call    dword ptr [ebx + 0x1c]
        pop     edi
        pop     esi
        pop     ebx
l_a185:
        add     esp, 0x3c
        ret
    }
}
