/*
 * FUN_00684DE0 (216 B) — __thiscall (ECX=this, RET 0x18). Constructor that
 * copies two 3-dword vectors into this, zeroes fields, and calls several
 * init helpers (FUN_00687920 / FUN_005d8530 / FUN_00687f20 / FUN_00687ee0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void  __cdecl FUN_00687920(void);
extern void  __cdecl FUN_005d8530(void);
extern void* __cdecl FUN_00687f20(void);
extern void* __cdecl FUN_00687ee0(void);

__declspec(naked) void FUN_00684de0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [eax + 0x4]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi + 0x8], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax]
        push    edi
        mov     dword ptr [esi + 0x4], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        lea     edi, [esi + 0xc]
        mov     dword ptr [edi], ecx
        mov     dword ptr [edi + 0x4], edx
        lea     ecx, [esp + 0x18]
        push    ecx
        xor     ebx, ebx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esi + 0x4c]
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00687920
        mov     al, byte ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        mov     cl, byte ptr [esp + 0x24]
        mov     dword ptr [esi + 0x50], ebx
        mov     byte ptr [esi + 0x58], al
        mov     al, byte ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x24], edx
        lea     edx, [esi + 0x30]
        push    edx
        mov     byte ptr [esi + 0x3d], al
        lea     eax, [esi + 0x2c]
        push    eax
        push    ebx
        mov     byte ptr [esi + 0x3e], cl
        mov     ecx, dword ptr [esp + 0x1c]
        push    edi
        push    esi
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esi + 0x58], ebx
        mov     byte ptr [esi + 0x40], bl
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x34], ecx
        call    FUN_005d8530
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [esi + 0x54]
        push    ebx
        push    ecx
        push    edx
        push    eax
        push    eax
        mov     byte ptr [esi + 0x3c], bl
        mov     dword ptr [esi + 0x5c], ebx
        call    FUN_00687f20
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esi + 0x44]
        push    ebx
        push    ecx
        mov     dword ptr [esi + 0x54], eax
        mov     eax, dword ptr [esi + 0x48]
        push    edx
        push    eax
        push    eax
        call    FUN_00687ee0
        mov     dword ptr [esi + 0x48], eax
        mov     eax, dword ptr [esi + 0x50]
        add     esp, 0x28
        mov     dword ptr [esi + 0x60], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x18
    }
}
