/*
 * FUN_005b4290 (219 B) — __thiscall initializer, RET 4 (1 stack param).
 *
 * Copies global config fields into this, calls a virtual method on the
 * sub-object at this+0x78, then does float clamping on this+0x540.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b4290(void);

__declspec(naked) void __stdcall FUN_005b4290(void)
{
    

extern int DAT_007b8d88;
extern int DAT_007b8d90;
extern int DAT_007b8d8c;
extern int DAT_0076c5b0;
extern int DAT_0077dff8;
__asm {
        mov eax, dword ptr [DAT_007b8d88]
        mov edx, dword ptr [DAT_007b8d90]
        push    ebx
        push    esi
        mov     esi, ecx
        mov ecx, dword ptr [DAT_007b8d8c]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x51c], ecx
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esi + 0x518], eax
        mov     eax, dword ptr [ecx]
        mov     byte ptr [esi + 0x514], 0x1
        mov     dword ptr [esi + 0x520], edx
        mov     dword ptr [esi + 0x568], ebx
        mov     dword ptr [esi + 0x570], ebx
        mov     byte ptr [esi + 0x53d], bl
        mov     byte ptr [esi + 0x564], bl
        mov     byte ptr [esi + 0x53e], bl
        mov     byte ptr [esi + 0x548], bl
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        fld     dword ptr [edx + 0x134]
        mov     ecx, eax
        fst     dword ptr [esi + 0x540]
        mov     dword ptr [esi + 0x428], 0x13
        fcomp dword ptr [DAT_0076c5b0]
        mov     dword ptr [esi + 0x544], ebx
        mov     byte ptr [esi + 0x548], bl
        fnstsw  ax
        test    ah, 0x40
        jz      skip1
        mov     eax, dword ptr [ecx + 0x2f8]
        mov     dword ptr [esi + 0x540], eax
skip1:
        fld     dword ptr [esi + 0x540]
        fcomp dword ptr [DAT_0077dff8]
        fnstsw  ax
        test    ah, 0x41
        jnz     skip2
        mov     dword ptr [esi + 0x540], 0x44480000
skip2:
        mov     dword ptr [esi + 0x554], ebx
        mov     dword ptr [esi + 0x558], ebx
        mov     dword ptr [esi + 0x560], ebx
        mov     dword ptr [esi + 0x55c], 0x1
        pop     esi
        pop     ebx
        ret     0x4
    }


}
