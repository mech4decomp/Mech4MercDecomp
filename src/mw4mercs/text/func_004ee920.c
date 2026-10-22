/*
 * FUN_004ee920 (254 B) — __thiscall (RET 0xC). MLR/Adept state-engine
 * constructor: sets vtable 0x774bf8, reads a stream via virtual
 * [vtable+0x20], resolves a texture index (FUN_004da840), and does
 * conditional FPU/transform setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004eea40(void);
extern void __cdecl FUN_004f0ce0(void);
extern int g_00774bf8;
extern void __cdecl FUN_004da840(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_004ee920(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [esp+0x2c]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x34]
        push    ebx
        push    edi
        mov     esi, ecx
        call    FUN_004eea40
        add     esp, 0x8
        push    eax
        mov     eax, dword ptr [esp+0x34]
        push    ebx
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_004f0ce0
        mov     ebp, dword ptr [esi+0x24]
        mov     ecx, dword ptr [ebp+0x144]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp+0x38]
        mov     dword ptr [esp+0x3c], ecx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], offset g_00774bf8
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x34]
        cmp     eax, -0x1
        mov     ebx, dword ptr [ebx+0x4c]
        mov     dword ptr [esi+0x28], ebx
        jz      L_004ee987
        push    eax
        mov     ecx, ebx
        call    FUN_004da840
        mov     dword ptr [esi+0x2c], eax
        jmp     L_004ee98e
L_004ee987:
        mov     dword ptr [esi+0x2c], 0
L_004ee98e:
        mov     ecx, dword ptr [esp+0x38]
        test    byte ptr [ecx+0x9c], 0x1
        jz      L_004ee9f5
        push    0x0
        call    FUN_00707e70
        mov     ecx, dword ptr [esp+0x38]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp+0x10]
        add     ebp, 0x80
        fstp    qword ptr [esp+0x10]
        push    eax
        mov     dword ptr [esp+0x1c], 0xbf800000
        mov     dword ptr [esp+0x28], ebp
        mov     dword ptr [esp+0x2c], 0
        mov     dword ptr [esp+0x20], 0
        mov     dword ptr [esp+0x24], 0xbf800000
        call    dword ptr [edx+0x4]
        mov     ecx, dword ptr [esi+0x2c]
        test    ecx, ecx
        jz      L_004ee9f5
        lea     eax, [esp+0x38]
        push    eax
        mov     byte ptr [esp+0x3c], 0x1
        mov     edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx+0x4]
L_004ee9f5:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [esp+0x34]
        push    ecx
        mov     ecx, ebx
        call    FUN_004da840
        pop     edi
        mov     dword ptr [esi+0x30], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     0xc
    }
}
