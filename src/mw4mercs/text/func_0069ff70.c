/*
 * FUN_0069ff70 (28 B) — __thiscall (RET 0x4): allocates 0x14 bytes via
 * FUN_004084d0 (operator new), initializes a pointer field at +0x10 from
 * *arg0, returns the allocation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void FUN_0069ff70(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        lea     ecx, [eax + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      done
        mov     edx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [edx]
        mov     dword ptr [ecx], edx
done:
        ret     0x4
    }
}
