/*
 * FUN_005beb20 (141 B) - __thiscall, RET 4 (1 param).
 *
 * If entity flags allow, increments this+0xa4, allocates a 0x14-byte
 * object, initializes it, stores param at +0x10, and appends to list
 * at this+0x9c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_00415180(void *this, void *p);
extern void __fastcall FUN_004179b0(void *this, void *p);

__declspec(naked) void __fastcall FUN_005beb20(void *this)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b8c10;
__asm {
mov eax, dword ptr [DAT_007dab44]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        lea     eax, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x17]
        test    cl, cl
        jz      done
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + 0x16]
        test    cl, cl
        jnz     done
        push    esi
        mov     esi, dword ptr [edi + 0xa4]
        inc     esi
        push    0x14
        mov     dword ptr [edi + 0xa4], esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      alloc_zero
        mov ecx, dword ptr [DAT_007b8c10]
        push    ecx
        mov     ecx, esi
        call    FUN_00415180
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], 0x77d04c
        jmp     alloc_done
alloc_zero:
        xor     esi, esi
alloc_done:
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        lea     ecx, [edi + 0x9c]
        mov     dword ptr [esi + 0x10], edx
        call    FUN_004179b0
        pop     esi
done:
        pop     edi
        ret     0x4
    }


}
