/*
 * FUN_005b9ce1 (extent 0x5b9ce1-0x5b9d51) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void FUN_005b9ce1(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 0x180]
        cmp    edi, 0x20
        jge    L_9d4c
        push    ebx
        mov    ebx, dword ptr [esi + edi*4 + 0x254]
        push    ebp
        lea    ebp, [ebx + 0x10]
        mov    ecx, ebp
        call    FUN_0041fcb0
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        mov    ecx, ebp
        call    FUN_0041fcd0
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [ebx + 0x18], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov    ecx, ebx
        inc    edi
        pop    ebp
        mov    dword ptr [ecx + 0x1c], eax
        mov    dword ptr [esi + 0x180], edi
        pop    ebx
L_9d4c:
        pop    edi
        pop    esi
        ret    8
    }
}
