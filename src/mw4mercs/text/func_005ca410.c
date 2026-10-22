/*
 * FUN_005ca410 (578 B) — __thiscall constructor. Initializes a large
 * set of fields on this (0x514..0x6a1), calls FUN_005c1720,
 * FUN_00707e70 (returns float, stored via fstp), reads from a
 * sub-object at this+0x170, and calls FUN_005d4d60.
 *
 * __thiscall (ECX = this), no stack args, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005d4d60(void);

__declspec(naked) void __stdcall FUN_005ca410(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    0x1
        call    FUN_005c1720
        xor     ebx, ebx
        mov     eax, 0x2
        mov     dword ptr [esi + 0x558], ebx
        mov     dword ptr [esi + 0x550], ebx
        push    ebx
        mov     byte ptr [esi + 0x6a1], bl
        mov     dword ptr [esi + 0x514], eax
        mov     byte ptr [esi + 0x51c], bl
        mov     dword ptr [esi + 0x520], 0x42c80000
        mov     dword ptr [esi + 0x528], ebx
        mov     dword ptr [esi + 0x52c], ebx
        mov     dword ptr [esi + 0x530], ebx
        mov     dword ptr [esi + 0x540], ebx
        mov     byte ptr [esi + 0x544], bl
        mov     byte ptr [esi + 0x549], bl
        mov     byte ptr [esi + 0x54a], bl
        mov     byte ptr [esi + 0x545], bl
        mov     dword ptr [esi + 0x54c], ebx
        mov     dword ptr [esi + 0x524], ebx
        mov     byte ptr [esi + 0x548], bl
        mov     dword ptr [esi + 0x55c], ebx
        mov     dword ptr [esi + 0x554], ebx
        mov     dword ptr [esi + 0x560], ebx
        mov     dword ptr [esi + 0x564], ebx
        mov     dword ptr [esi + 0x568], ebx
        mov     dword ptr [esi + 0x56c], ebx
        mov     dword ptr [esi + 0x574], ebx
        mov     dword ptr [esi + 0x578], ebx
        mov     dword ptr [esi + 0x584], ebx
        mov     dword ptr [esi + 0x594], ebx
        mov     byte ptr [esi + 0x5a0], bl
        mov     dword ptr [esi + 0x5b8], eax
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x5bc]
        push    ebx
        mov     byte ptr [esi + 0x546], 0x1
        mov     byte ptr [esi + 0x547], 0x1
        mov     dword ptr [esi + 0x5d0], ebx
        mov     dword ptr [esi + 0x5d4], ebx
        mov     dword ptr [esi + 0x5d8], ebx
        mov     dword ptr [esi + 0x5dc], ebx
        mov     dword ptr [esi + 0x5e0], ebx
        mov     dword ptr [esi + 0x57c], ebx
        mov     dword ptr [esi + 0x5e4], ebx
        mov     dword ptr [esi + 0x5f8], 0xfffffffe
        mov     byte ptr [esi + 0x5fc], bl
        mov     byte ptr [esi + 0x5fd], 0x1
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x4dc]
        mov     edi, dword ptr [esi + 0x170]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        mov     byte ptr [esi + 0x5fe], bl
        call    dword ptr [eax + 0x60]
        mov     dword ptr [esi + 0x570], eax
        mov     eax, dword ptr [edi + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esi + 0x4e4]
        add     eax, 0x80
        mov     eax, ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esi + 0x4e8], eax
        mov     ecx, edx
        mov     dword ptr [esi + 0x4ec], ecx
        mov     dword ptr [esi + 0x4f8], ebx
        mov     dword ptr [esi + 0x4f4], ebx
        mov     dword ptr [esi + 0x4f0], ebx
        mov     dword ptr [esi + 0x53c], ebx
        mov     dword ptr [esi + 0x538], ebx
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esi + 0x534], ebx
        mov     dword ptr [esi + 0x590], ebx
        mov     dword ptr [esi + 0x58c], ebx
        mov     dword ptr [esi + 0x588], ebx
        push    ebx
        mov     dword ptr [esi + 0x504], ebx
        mov     dword ptr [esi + 0x500], ebx
        mov     dword ptr [esi + 0x4fc], ebx
        mov     byte ptr [esi + 0x614], 0x1
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x610]
        mov     dword ptr [esi + 0x630], ebx
        mov     dword ptr [esi + 0x678], ebx
        mov     dword ptr [esi + 0x680], ebx
        mov     dword ptr [esi + 0x694], ebx
        mov     ecx, esi
        mov     dword ptr [esi + 0x634], ebx
        mov     dword ptr [esi + 0x654], ebx
        mov     dword ptr [esi + 0x670], 0xfffffffe
        mov     dword ptr [esi + 0x67c], ebx
        mov     dword ptr [esi + 0x674], 0xfffffffe
        mov     dword ptr [esi + 0x684], ebx
        mov     byte ptr [esi + 0x6a0], bl
        mov     dword ptr [esi + 0x698], ebx
        call    FUN_005d4d60
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
