/*
 * FUN_005d69d0 (188 B) — Node constructor.
 *
 * __thiscall (ECX = this), RET 8 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005d9fc0(void);
extern void FUN_005d9fe0(void);

__declspec(naked) void *__stdcall FUN_005d69d0(void *param)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x17]
        xor     ebx, ebx
        push    ecx
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_005d9fc0
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x17]
        push    eax
        lea     ecx, [esi + 0x28]
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_005d9fe0
        mov     cl, byte ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x2c], ebx
        mov     byte ptr [esi + 0x34], cl
        push    0xc
        lea     ebp, [esi + 0x8]
        mov     dword ptr [esi + 0x30], ebx
        push    ebp
        mov     ecx, edi
        mov     dword ptr [esi + 0x34], ebx
        mov     byte ptr [esi + 0x5], bl
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp]
        mov     eax, 0xbf800000
        cmp     ecx, eax
        jz      L6A80
        cmp     dword ptr [esi + 0xc], eax
        jz      L6A80
        cmp     dword ptr [esi + 0x10], eax
        jz      L6A80
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ebp, [esi + 0x44]
        push    ebp
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x4c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        fld     dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x20]
        fld     st(0)
        mov     edx, dword ptr [ecx + 0x50]
        fmul    st, st(1)
        mov     dword ptr [esi + 0x50], edx
        mov     byte ptr [esi + 0x4], bl
        fstp    dword ptr [esi + 0x48]
        fstp    st(0)
L6A80:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
