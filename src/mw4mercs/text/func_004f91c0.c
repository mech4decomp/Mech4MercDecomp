/*
 * FUN_004f91c0 (119 B) — MLR/Adept: guarded by a global flag; calls
 * FUN_00416b60 twice (this+0x19c) with two char* args, compares them,
 * increments counters, sets this+0x1b0. __thiscall (ECX = this),
 * RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

extern int __cdecl FUN_00416b60(void);

__declspec(naked) void FUN_004f91c0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        push    edi
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0xc]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax+0x16]
        test    dl, dl
        mov     dword ptr [esp+4], ecx
        jz      L9232
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        push    ebp
        push    esi
        lea     esi, [ecx+0x19c]
        push    ebx
        mov     ecx, esi
        call    FUN_00416b60
        mov     ebp, dword ptr [esp+0x1c]
        push    ebp
        mov     ecx, esi
        mov     edi, eax
        call    FUN_00416b60
        test    edi, edi
        jz      L921d
        mov     cl, byte ptr [ebx]
        cmp     cl, byte ptr [ebp]
        jnz     L921a
        mov     dx, word ptr [ebx+2]
        cmp     dx, word ptr [ebp+2]
        jz      L921d
L921a:
        inc     dword ptr [edi+0x14]
L921d:
        test    eax, eax
        pop     esi
        pop     ebp
        pop     ebx
        jz      L9227
        inc     dword ptr [eax+0x18]
L9227:
        mov     eax, dword ptr [esp+4]
        mov     byte ptr [eax+0x1b0], 1
L9232:
        pop     edi
        pop     ecx
        ret     0xc
    }
}
