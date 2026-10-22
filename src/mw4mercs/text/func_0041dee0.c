/*
 * FUN_0041dee0 (295 B) — __thiscall (ECX=this), RET 0x8 (2 stack args).
 * Stream/transform open helper. Initializes object fields, then branches
 * on arg2 (nonzero vs zero) to run one of two setup paths involving
 * FUN_006f4950 / FUN_006faca0 / FUN_006fc4d0 / FUN_006fc400 and an IAT
 * call at 0x0076b2cc. Sets [this+0x24]=EAX (IAT result), [this+0x2c]=1,
 * clears g_007b8ef0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b8ef0;
extern char g_007b8ef1;
extern int g_007b8eec;
extern int g_00858a44;
extern int g_00858a48;
extern void *g_0076b2cc;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fbe50(void);
extern void __cdecl FUN_006fc400(void);

__declspec(naked) void FUN_0041dee0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        xor     ecx, ecx
        cmp     eax, ecx
        push    edi
        lea     edi, [esi + 0x10]
        lea     ebp, [esi + 0x1c]
        lea     ebx, [esi + 0x28]
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x18], ecx
        mov     dword ptr [edi], ecx
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [ebp], ecx
        mov     dword ptr [ebx], ecx
        jnz     loc_41df9f
        mov     al, byte ptr [g_007b8ef0]
        test    al, al
        jz      loc_41df4b
        mov     eax, dword ptr [g_007b8eec]
        mov     ebx, dword ptr [g_00858a44]
        push    eax
        mov     dword ptr [g_00858a44], ecx
        call    FUN_006f4950
        push    ebp
        push    edi
        push    0x7b8de8
        call    FUN_006faca0
        call    FUN_006f49a0
        mov     dword ptr [g_00858a44], ebx
        push    0x7b8de8
        jmp     loc_41df79
loc_41df4b:
        mov     ecx, dword ptr [g_007b8eec]
        push    ecx
        call    FUN_006f4950
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    edi
        push    ebx
        call    FUN_006faca0
        call    FUN_006f49a0
        mov     al, byte ptr [g_007b8ef0]
        test    al, al
        jz      loc_41df78
        push    0x7b8de8
        jmp     loc_41df79
loc_41df78:
        push    ebx
loc_41df79:
        call    dword ptr [g_0076b2cc]
        mov     edi, dword ptr [edi]
        add     esp, 0x4
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edi
        pop     edi
        mov     dword ptr [esi + 0x24], eax
        mov     byte ptr [esi + 0x2c], 0x1
        pop     esi
        pop     ebp
        mov     byte ptr [g_007b8ef0], 0x0
        pop     ebx
        ret     0x8
loc_41df9f:
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], eax
        mov     al, byte ptr [g_007b8ef1]
        test    al, al
        jz      loc_41dfd8
        mov     edx, dword ptr [g_00858a48]
        push    edi
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [g_00858a48], ecx
        call    FUN_006fc4d0
        test    al, al
        jz      loc_41dfcf
        push    edi
        call    FUN_006fbe50
loc_41dfcf:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [g_00858a48], eax
loc_41dfd8:
        push    0x1
        push    edi
        push    ebx
        call    FUN_006fc400
        push    edi
        mov     byte ptr [esi + 0x2c], 0x1
        mov     dword ptr [ebp], 0xffffffff
        call    dword ptr [g_0076b2cc]
        add     esp, 0x4
        pop     edi
        mov     dword ptr [esi + 0x24], eax
        pop     esi
        pop     ebp
        mov     byte ptr [g_007b8ef0], 0x0
        pop     ebx
        ret     0x8
    }
}
